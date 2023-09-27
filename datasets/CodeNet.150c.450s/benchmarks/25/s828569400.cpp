#include <iostream>

constexpr int ALPH_NUM = 26;

int main()
{
    int alph_cnt[ALPH_NUM] = {};

    char in_char;
    while ((in_char = std::cin.get()) != EOF) {
        if ('a' <= in_char && in_char <= 'z') {
            alph_cnt[in_char - 'a']++;
        }
        if ('A' <= in_char && in_char <= 'Z') {
            alph_cnt[in_char - 'A']++;
        }
    }

    for (int i = 0; i < ALPH_NUM; i++) {
        std::cout << static_cast<char>('a' + i)
                  << " : " << alph_cnt[i] << std::endl;
    }

    return 0;
}