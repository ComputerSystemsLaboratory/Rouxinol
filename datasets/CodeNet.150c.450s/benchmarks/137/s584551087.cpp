/* ALDS1_4_C: Dictionary */

#include <iostream>
#include <cstdio>

const int MAX_KEY_LENGTH = 12;
const int N_KEY_CHARS = 4;

class Dict {
    int *KEYS;
    int char_to_id(char);
    int to_hash(char*);
    public:
        Dict();
        void insert(char*);
        bool has(char*);
};

Dict::Dict() {
    int max_hash = 0, w = 1;
    for (int i = 0; i < MAX_KEY_LENGTH; i++, w *= N_KEY_CHARS) {
        max_hash += N_KEY_CHARS * w;
    }
    KEYS = new int[max_hash + 1];
    std::fill_n(KEYS, max_hash, 0);
}

void Dict::insert(char *key) {
    KEYS[ to_hash(key) ] = true;
}

bool Dict::has(char *key) {
    return KEYS[ to_hash(key) ];
}

int Dict::char_to_id(char c) {
    switch (c) {
        case 'A': return 1;
        case 'C': return 2;
        case 'G': return 3;
        case 'T': return 4;
    }
    return 0;
}

int Dict::to_hash(char *key) {
    int hash = 0;
    int w = 1;
    for (int i = 0; key[i]; i++, w *= N_KEY_CHARS) {
        hash += w * char_to_id(key[i]);
    }
    return hash;
}

int main() {
    int n_ops;
    scanf("%d", &n_ops);

    Dict dict;
    char op[10], key[MAX_KEY_LENGTH + 1];

    for (int i = 0; i < n_ops; i++) {
        scanf("%s %s", op, key);
        switch (op[0]) {
            case 'i': // insert
                dict.insert(key);
                break;
            case 'f': // find
                puts( dict.has(key) ? "yes" : "no" );
                break;
        }
    }

    return 0;
}