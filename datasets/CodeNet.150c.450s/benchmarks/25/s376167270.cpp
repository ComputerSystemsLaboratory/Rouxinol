#include <iostream>
#include <cctype>

#define MAX_LEN (1200)

using namespace std;

int main()
{
    char* str = new char[MAX_LEN + 1];
    int*  counter = new int[26];

    for (int i = 0; i < 26; i++) {
         counter[i] = 0;
    }
    
    while (cin >> str) {
           for (int i = 0; str[i] != '\0'; i++) {
                if (str[i] >= 'A' && str[i] <= 'Z') {
                    str[i] = tolower(str[i]);
                }
           

           if (str[i] >= 'a' && str[i] <= 'z') {
               int num = str[i] - 'a';
               counter[num]++;
           }
}
    }

    for (int i = 0; i < 26; i++) {
         cout << (char)('a' + i) << " : " << counter[i] << endl;
    }

    delete[] str;
    delete[] counter;

    return (0);
}