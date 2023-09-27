#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);

    int alphas[26];
    std::fill_n(alphas, 26, 0);

    char c;
    while (! (std::cin >> c).eof() ) {
        int idx = tolower(c) - 'a';
        if (0 <= idx && idx < 26) alphas[idx]++;
    }

    for (int i = 0; i < 26; i++) {
        c = (char)(i + 'a');
        std::cout << c << " : " << alphas[i] << "\n";
    }

    return 0;
}