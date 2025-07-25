"""
Rouxinol an infrastructure to explore code generation and machine learning models.
Copyright (C) 2023 Anderson Faustino da Silva

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <https://www.gnu.org/licenses/>.
"""

import sys
import random as rn
import subprocess

from rouxinol.utility import run_command_unix

from absl import logging as lg


def __duplicates(lst, item):
    return [i for i, x in enumerate(lst) if x == item]

def update(sequence):
    """Update the sequence.

    LLVM documentation suggests that some optimizations
    could precede and succeed an optimization for its
    effectiveness. Thus, this method add/change a sequence
    to handle such suggestions.

    Look:

    Suresh Purini and Lakshya Jain.
    Finding Good Optimization Sequences Covering Program Space.
    TACO.
    2013

    Parameter
    ----------
    sequence : list
        The original sequence (a list of optimizations).

    Return
    ------
    sequence : list
        The updated sequence.
    """
    newseq = []
    firstime = True
    for _, opt in enumerate(sequence):
        # Predecessor constraints
        if opt in ['-constprop',
                   '-correlated-propagation',
                   '-gvn',
                   '-ipconstprop',
                   '-ipsccp']:
            newseq.append('-reassociate')
        elif opt == '-licm':
            newseq.append('-reassociate')
            newseq.append('-loop-simplify')
        elif opt == '-loop-unswitch':
            newseq.append('-reassociate')
            newseq.append('-loop-simplify')
            newseq.append('-licm')
        elif '-loop-' in opt:
            newseq.append('-indvars')
            newseq.append('-lcssa')
        if opt == '-loop-unroll':
            newseq.append('-loop-rotate')
            if firstime:
                newseq.append('-unroll-allow-partial')
                firstime = False
        # Add the actual optimization
        newseq.append(opt)
        # Sucessor Constraints
        if opt == '-tailduplicate':
            newseq.append('-simplifycfg')
        elif opt == '-sccp':
            newseq.append('-dce')
        elif opt in ['-ipconstprop',
                     '-ipsccp']:
            newseq.append('-deadargelim')
            newseq.append('-adce')
        elif opt in ['-constprop']:
            newseq.append('-die')

    return newseq

def sanitize(sequence):
    """Remove consecutive equal optimizations.

    Example
    -------
    [-gvn, -inline, -inline, -sroa] -> [-gvn, -inline, -sroa]

    Such situation can occur due to the generation of random
    elements to compose a sequence.

    Parameter
    ---------
    sequence : list
        The original sequence.

    Return
    ------
    sequence : list
        The clean sequence.
    """
    newseq = sequence[:]
    if len(newseq) == 1:
        return newseq
    i = 0
    while True:
        if i == len(newseq)-1:
            break
        if newseq[i] == newseq[i+1]:
            del newseq[i]
        else:
            i += 1
    return newseq

def mem2reg_first(sequence):
    """-mem2reg should be the first pass.

    Parameter
    ---------
    sequence : list
        The original sequence.

    Return
    ------
    sequence : list
        The new sequence.
    """
    new_sequence = [seq for seq in sequence if seq != '-mem2reg']
    return ['-mem2reg'] + new_sequence

def index_pass_to_list(sequence_index,
                       passes):
    """Convert a index sequence into a pass sequence.

    Example
    -------
    [1, 2, ...] -> [-basicaa, -early-cse, ...]

    Parameter
    ---------
    sequence_index : list
        The sequence composed by pass index.

    passes : dict
        The dictionary which describes the avaliable passes.

    Return
    ------
    sequence : list
        The sequence composed by pass name.
    """
    sequence = [passes[int(round(item, 0))]
                for item in sequence_index if item]
    return sequence

def index_pass_to_string(sequence_index,
                         passes):
    """Convert a index sequence into a string.

    Example
    -------
    [1, 2, ...] -> "-basicaa -early-cse ..."

    Parameter
    ---------
    sequence_index : list
        The sequence composed by pass index.

    passes : list
        The avaliable passes.

    Return
    ------
    sequence : str
        The sequence composed by pass name.
    """
    sequence = ' '.join([passes[int(round(item, 0))]
                        for item in sequence_index if item])
    return sequence

def remove_passes(sequence,
                  bool_vector):
    """Turn off (remove) some passes.

    Parameters
    ----------
    sequence : list
        The original sequence

    bool_vector : list
        The list that indicates which passes to turn off.

    Return
    ------
    sequence: list
        The new sequence.
    """
    new_sequence = [seq for i, seq in enumerate(sequence)
                    if bool_vector[i]]
    return new_sequence

def name_pass_to_string(sequence):
    """Convert a list of names to string.

    Example
    -------
    [-basicaa, -early-cse, ...] -> "-basicaa -early-cse ..."

    Parameter
    ---------
    sequence : list
        A list of passes.

    Return
    ------
    sequence : str
        A string.
    """
    string = ' '.join(sequence)
    return string

def string_to_name_pass(sequence):
    """Convert string to a list of names.

    Example
    -------
    "-basicaa -early-cse ..." -> [-basicaa, -early-cse, ...]

    Parameter
    ---------
    sequence : string
        A sequence of passes.

    Return
    ------
    sequence : list
        A sequence.
    """
    lst_sequence = sequence.split()
    return lst_sequence

def fix_index(sequence):
    """Fix the pass index (float to int).

    Some Pygmo's algorithms generate float numbers (index of the
    pass), so we need to convert them to int.

    Parameter
    ---------
    sequence : list
        The sequence.

    Return
    ------
    sequence : list
        The new sequence.
    """
    new_seq = [int(round(pass_)) for pass_ in sequence]
    return new_seq

def get_the_best(sequences,
                 nof_sequences=1):
    """Return the best sequences based on the goal value.
       This method removes ties based on lenght (the smallest the best).

    Parameters
    ----------
    sequences : dict
        The dictionary with the sequences.

    nof_sequence : int
        The number of sequences to extract from sequences.

    Return
    ------
    best : dict
        The N best sequences.
        {key: list}
    """
    if len(sequences) < nof_sequences:
        lg.error('There is no {} sequences '.format(nof_sequences))
        sys.exit(1)

    goals = [data['goal'] for _, data in sequences.items()]
    keys = [key for key, _ in sequences.items()]

    duplicates = dict((x, __duplicates(goals, x))
                      for x in set(goals) if goals.count(x) > 1)

    remove = []
    for _, positions in duplicates.items():
        rank = [(len(sequences[keys[pos]]['seq']), keys[pos])
                for pos in positions]
        rank.sort(reverse=True)
        del rank[-1]
        for _, key in rank:
            remove.append(key)

    sequences_ = sequences.copy()
    for key in remove:
        del(sequences_[key])

    rank = [(data['goal'], key) for key, data in sequences_.items()]
    rank.sort()

    best = {}
    for i in range(nof_sequences):
        if i < len(rank):
            key = rank[i][1]
            best[key] = sequences[key].copy()
    return best

def get_all_best(sequences):
    """Return all best sequences based on the goal value.
       This method returns all best sequences, this means the K
       sequences with the same goal value.

    Parameters
    ----------
    sequences : dict
        The dictionary with the sequences.

    Return
    ------
    best : dict
        The N best sequences.
        {key: list}
    """
    if len(sequences) < 1:
        lg.error('There is no sequences')
        sys.exit(1)

    rank = [(data['goal'], key) for key, data in sequences.items()]
    rank.sort()

    best = {}
    best_goal = rank[0][0]
    for i, (goal, key) in enumerate(rank):
        if best_goal == goal:
            key = rank[i][1]
            best[key] = sequences[key].copy()
        else:
            break
    return best

def filter_sequences(sequences,
                     value):
    """Return the sequences whose goal is better than "value".

    Parameters
    ----------
    sequences : dict
        The dictionary with the sequences.

    value : int
        The threshold

    Return
    ------
    best : dict
        The N best sequences.
        {key: list}
    """
    if len(sequences) < 1:
        lg.error('There is no sequences')
        sys.exit(1)

    best = {}
    for key, seq_data in sequences.items():
        if seq_data['goal'] <= value:
            best[key] = sequences[key].copy()
    return best

def get_the_smallest(sequences):
    """Return the smallest sequences.

    Parameters
    ----------
    sequences : dict
        The dictionary with the sequences.

    Return
    ------
    small : list
        The smallest sequence.
    """
    rank = [(len(data['seq']), key) for key, data in sequences.items()]
    return sequences[rank[0][1]]

def exist(sequence,
          sequences):
    """Verify if a sequence exists.

    Parameters
    ----------
    sequence : list
        The sequence to verify.

    sequences : list
        The list of sequences.

    Return
    ------
    exist : bool
        True if the sequence exists in the dictionary, otherwise False.
    """
    find = False
    for _, data in sequences.items():
        if data == sequence:
            find = True
            break
    return find

def create_random_sequence(minimum,
                           maximum,
                           repetition,
                           passes):
    """Create a sequence.

    Parameters
    ----------
    passes : list
        The available passes to use.

    mininum : int
        The minimum length of the sequence.

    maximum : int
        The maximum length of the sequence.

    repetition : bool
        Enable repetition ?

    Return
    ------
    sequence : list
        A list of optimization (a sequence).
    """
    sequence = []
    first_key = 0
    last_key = len(passes) - 1
    if minimum != maximum:
        real_length = rn.randint(minimum, maximum)
    else:
        real_length = maximum

    while True:
        pass_ = rn.randint(first_key, last_key)
        insert = True
        if (not repetition) and (pass_ in sequence):
            insert = False
        if insert:
            sequence.append(pass_)
        if len(sequence) == real_length:
            break

    sequence = index_pass_to_list(sequence,
                                  passes)

    return sequence

def create_random_sequences_v1(nof_sequences,
                                minimum,
                                maximum,
                                factor,
                                ssa,
                                shuffle,
                                apply_update,
                                repetition,
                                original,
                                passes,
                                sequences=None):
    """Create N random sequences.

    Parameters
    ----------
    nof_sequences : int
        The number of sequences.

    minimum : int
        The minimum and maximum length of the sequence.

    maximum : int
        The maximum length of the sequence.

    factor : int
        The times to appy to nof_sequences. (nof_sequences *= factor)

    ssa : bool
        Enable ssa?

    shuffle : bool
        Enable shuffle?

    apply_update : bool
        Enable update?

    repetition : bool
        Enable repetition?

    original : bool
        Insert the orginal?

    passes : list
        The available passes to use.

    sequences : dict
        The initial sequences.

    Return
    ------
    sequences : dict
        A dictionary which contains N random sequences.
    """
    if (not repetition) and (maximum > (maximum*0.7)):
        lg.error('adjust MAXIMUM lenght. MAXIMUM \
        should be less than 70% of |PASSES|')
        sys.exit(1)
    if not (original or apply_update or shuffle):
        lg.error('Error: it is necessary to use at \
        least one argument (-original, -update, -shuffle)')
        sys.exit(1)

    if sequences:
        counter = len(sequences)
        new_sequences = sequences.copy()
    else:
        counter = 0
        new_sequences = {}

    nof_sequences *= factor

    while True:
        # generate a sequence
        seq = create_random_sequence(minimum,
                                     maximum,
                                     repetition,
                                     passes)
        seq = sanitize(seq)

        if ssa:
            seq = mem2reg_first(seq)

        if original:
            if not exist(seq,
                         new_sequences):
                new_sequences[counter] = seq
                counter += 1
                if counter >= nof_sequences:
                    break
            if shuffle:
                sseq = seq[:]
                rn.shuffle(sseq)
                sseq = sanitize(sseq)
                if not exist(sseq,
                             new_sequences):
                    new_sequences[counter] = sseq
                    counter += 1
                    if counter >= nof_sequences:
                        break
        if apply_update:
            seq = update(seq)
            seq = sanitize(seq)

            if not exist(seq,
                         new_sequences):
                new_sequences[counter] = seq
                counter += 1
                if counter >= nof_sequences:
                    break

            if shuffle:
                seq = update(seq)
                seq = sanitize(seq)
                if not exist(seq,
                             new_sequences):
                    new_sequences[counter] = seq
                    counter += 1
                    if counter >= nof_sequences:
                        break

    return new_sequences

def create_random_sequences_v2(nof_sequences,
                                minimum,
                                maximum,
                                factor,
                                ssa,
                                shuffle,
                                apply_update,
                                repetition,
                                original,
                                passes,
                                sequences=None):
    """Create N random sequences.

    Parameters
    ----------
    nof_sequences : int
        The number of sequences.

    minimum : int
        The minimum and maximum length of the sequence.

    maximum : int
        The maximum length of the sequence.

    factor : int
        The times to appy to nof_sequences. (nof_sequences *= factor)

    ssa : bool
        Enable ssa?

    shuffle : bool
        Enable shuffle?

    apply_update : bool
        Enable update?

    repetition : bool
        Enable repetition?

    original : bool
        Insert the orginal?

    passes : list
        The available passes to use.

    sequences : dict
        The initial sequences.

    Return
    ------
    sequences : dict
        A dictionary which contains N random sequences.
    """
    if (not repetition) and (maximum > (len(passes)*0.7)):
        lg.error('adjust MAXIMUM lenght. MAXIMUM should be less than 70% of |PASSES|')
        sys.exit(1)
    if not (original or ssa or apply_update or shuffle):
        lg.error('Error: it is necessary to use at least one argument (-original , -ssa, -update, -shuffle)')
        sys.exit(1)

    if sequences:
        counter = len(sequences)
        new_sequences = sequences.copy()
    else:
        counter = 0
        new_sequences = {}

    nof_sequences *= factor

    while True:
        # generate a sequence
        seq = create_random_sequence(minimum,
                                     maximum,
                                     repetition,
                                     passes)
        seq = sanitize(seq)

        original_seq = seq[:]

        if shuffle:
            sseq = seq[:]
            rn.shuffle(sseq)
            seq = sanitize(sseq)

        if ssa:
            seq = mem2reg_first(seq)
        
        if apply_update:
            seq = update(seq)
            seq = sanitize(seq)

        if original:
            if not exist(original_seq,
                         new_sequences):
                new_sequences[counter] = original_seq
                counter += 1
                if counter >= nof_sequences:
                    break

        if shuffle or ssa or apply_update:
            if not exist(seq,
                         new_sequences):
                new_sequences[counter] = seq
                counter += 1
                if counter >= nof_sequences:
                    break

    return new_sequences

def expand(passes):
    """Expand the sequence.
    
    LLVM adds several passes in the sequence.

    Example:
    passes: -constprop

    LLVM invokes: -targetlibinfo -tti -constprop -verify

    See:
    opt --disable-output <sequence> --debug-pass=Arguments < /dev/null

    Argument
    --------
    passes : list

    Return
    ------
    sequences : list
    """
    str_passes = name_pass_to_string(passes)
    cmdline = 'opt --disable-output {}'.format(str_passes) \
              + ' --debug-pass=Arguments < /dev/null'

    output = run_command_unix(cmdline)
    if output['returncode'] != 0:
        return ''

    expand_passes = output['stderr']
    expand_passes = expand_passes.replace('\n', '')
    expand_passes = expand_passes.replace('Pass Arguments:  ', '')

    # Return
    return string_to_name_pass(expand_passes)

def split(passes,
          expand=False):
    """Generate small sequences.

    Argument
    --------
    passes : list

    expand : bool
        If True evaluate the expanded sequence.

    Return
    ------
    sequences : dict
    """
    new_passes = passes[:]
    if expand:
        new_passes = expand(passes)

    sequences = {}
    for i in range(1, len(new_passes)+1):
        sequences[i-1] = new_passes[:i]
    return sequences
