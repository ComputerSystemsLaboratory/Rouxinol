#include <cstdio>
#include <cstdlib>
#include <cctype>

int main()
{
    char ch[1200];
    char alphabet;
    int number, counter[26];
    int int_alpha;

    for(int i = 0; i < 26; i++) counter[i] = 0;

    while(scanf("%s", ch) != EOF){
        for(int i = 0; ch[i] != '\0';i++){
            if(isupper(ch[i])) ch[i] = tolower(ch[i]);
            number = ch[i] - 'a';
            counter[number]++;
        }
    }

    for(int i = 0; i < 26; i++){
        int_alpha = 'a' + i;
        alphabet = static_cast<char>(int_alpha);
        printf("%c : %d\n", alphabet, counter[i]);
    }
    return 0;
}