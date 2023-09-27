#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);

    int alphas[26] = {};
    char c;

    while (! (std::cin >> c).eof() ) {
        c = tolower(c);
        if ('a' <= c && c <= 'z') alphas[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        std::cout << (char)(i + 'a') << " : " << alphas[i] << "\n";
    }

    return 0;
}