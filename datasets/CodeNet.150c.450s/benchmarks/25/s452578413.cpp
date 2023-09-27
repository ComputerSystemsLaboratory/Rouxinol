#include <iostream>
#include <cctype>

int main()
{
    char ch;
    int alphabet[26] = {0};

    while (std::cin >> ch) {
        if (isupper(ch)) {
            alphabet[ch - 'A']++;
        } else if (islower(ch)) {
            alphabet[ch - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        std::cout << (char)(i + 'a') << " : " << alphabet[i] << std::endl;
    }

    return 0;
}