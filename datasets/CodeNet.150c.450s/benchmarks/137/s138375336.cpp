#include <iostream>
#include <string>
#include <vector>

const int max_key_length = 12;

class Dictionary
{
    std::vector<int> _keys;
    int _char_to_id(char);
    int _to_hash(std::string);
public:
    Dictionary();
    ~Dictionary();
    void insert(std::string);
    bool find(std::string);
};

Dictionary::Dictionary() {
    int max_hashsize = 0;
    int w = 1;
    for (int i = 0; i < max_key_length; i++) {
        max_hashsize += 4 * w;
        w *= 4;
    }
    _keys.resize(max_hashsize);
}

Dictionary::~Dictionary() {
    ;
}

int Dictionary::_char_to_id(char c) {
    switch (c) {
        case 'A': return 1;
        case 'C': return 2;
        case 'G': return 3;
        case 'T': return 4;
    }

    // default
    return 0;
}

int Dictionary::_to_hash(std::string word) {
    int val = 0;
    int w = 1;
    for (int i = 0; i < word.length(); i++) {
        val += _char_to_id(word[i]) * w;
        w *= 4;
    }

    return val;
}

void Dictionary::insert(std::string word) {
    _keys[_to_hash(word)] = true;
}

bool Dictionary::find(std::string word) {
    return _keys[_to_hash(word)];
}

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;

    Dictionary dict;
    std::string op;
    std::string word;
    for (int i = 0; i < n; i++) {
        std::cin >> op;
        std::cin >> word;
        if (op[0] == 'i') {
            dict.insert(word);
        } else if (op[0] == 'f') {
            if (dict.find(word))
                std::cout << "yes" << std::endl;
            else
                std::cout << "no" << std::endl;
        }
    }

    return 0;
}