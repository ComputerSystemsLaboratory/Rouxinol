/*
                                ^....0
                               ^ .1 ^1^
                               ..     01
                              1.^     1.0
                             ^ 1  ^    ^0.1
                             1 ^        ^..^
                             0.           ^ 0^
                             .0            1 .^
                             .1             ^0 .........001^
                             .1               1. .111100....01^
                             00             ^   11^        ^1. .1^
                             1.^                              ^0  0^
                               .^                                 ^0..1
                               .1                                   1..^
                             1 .0                                     ^  ^
                              00.                                     ^^0.^
                              ^ 0                                     ^^110.^
                          0   0 ^                                     ^^^10.01
                   ^^     10  1 1                                      ^^^1110.1
                   01     10  1.1                                      ^^^1111110
                   010    01  ^^                                        ^^^1111^1.^           ^^^
                   10  10^ 0^ 1                                            ^^111^^^0.1^       1....^
                    11     0                                               ^^11^^^ 0..  ....1^   ^ ^
                    1.     0^                                               ^11^^^ ^ 1 111^     ^ 0.
                   10   00 11                                               ^^^^^   1 0           1.
                   0^  ^0  ^0                                                ^^^^    0            0.
                   0^  1.0  .^                                               ^^^^    1 1          .0
                   ^.^  ^^  0^                             ^1                ^^^^     0.         ^.1
                   1 ^      11                             1.                ^^^     ^ ^        ..^
                  ^..^      ^1                             ^.^               ^^^       .0       ^.0
                  0..^      ^0                              01               ^^^       ..      0..^
                 1 ..        .1                             ^.^              ^^^       1 ^  ^0001
                ^  1.        00                              0.             ^^^        ^.0 ^.1
                . 0^.        ^.^                             ^.^            ^^^         ..0.0
               1 .^^.         .^                  1001        ^^            ^^^         . 1^
               . ^ ^.         11                0.    1         ^           ^^          0.
                0  ^.          0              ^0       1                   ^^^          0.
              0.^  1.          0^             0       .1                   ^^^          ..
              .1   1.          00            .        .1                  ^^^           ..
             1      1.         ^.           0         .^                  ^^            ..
             0.     1.          .^          .         0                                  .
             .1     1.          01          .        .                                 ^ 0
            ^.^     00          ^0          1.       ^                                 1 1
            .0      00           .            ^^^^^^                                   .
            .^      00           01                                                    ..
           1.       00           10                                                   1 ^
          ^.1       00           ^.                                            ^^^    .1
          ..        00            .1                                        1..01    ..
         1.1         00           1.                                       ..^      10
        ^ 1^         00           ^.1                                      0 1      1
        .1           00            00                                       ^  1   ^
         .           00            ^.^                                        10^  ^^
       1.1           00             00                                              10^
       ..^           1.             ^.                                               1.
      0 1            ^.              00                 00                            .^
        ^            ^.              ^ 1                00   ^0000^     ^               01
     1 0             ^.               00.0^              ^00000   1.00.1              11
     . 1              0               1^^0.01                      ^^^                01
      .^              ^                1   1^^                                       ^.^
    1 1                                                                              0.
    ..                                                                              1 ^
     1                                                                               1
   ^ ^                                                                             .0
   1                                                                             ^ 1
   ..                                                          1.1            ^0.0
  ^ 0                                                           1..01^^100000..0^
  1 1                                                            ^ 1 ^^1111^ ^^
  0 ^                                                             ^ 1      1000^
  .1                                                               ^.^     .   00
  ..                                                                1.1    0.   0
  1.                                                                  .    1.   .^
  1.                                                                 1    1.   ^0
 ^ .                                                                 ^.1 00    01
 ^.0                                                                  001.     .^
 */
// Virtual_Judge —— Linear Search Aizu - ALDS1_4_A.cpp created by VB_KoKing on 2019-05-01:18.
/* Procedural objectives：

 Variables required by the program:

 Procedural thinking：

 Functions required by the program:

*/
/* My dear Max said：
"I like you,
So the first bunch of sunshine I saw in the morning is you,
The first hurricane that passed through your ear is you,
The first star you see is also you.
The world I see is all your shadow."

FIGHTING FOR OUR FUTURE！！！
*/
#include <iostream>

using namespace std;

bool search(int A[], int n, int key) {
    int i = 0;
    A[n] = key;
    while (A[i] != key) i++;
    return i != n;
}

int main() {
    int n, q, key, sum = 0, A[10007];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> key;
        if (search(A, n, key)) sum++;
    }
    cout << sum << endl;
    return 0;
}
