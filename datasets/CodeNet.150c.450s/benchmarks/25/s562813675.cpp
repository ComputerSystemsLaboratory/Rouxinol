#include <cstdio>
#include <cctype>

    int counter[26] = {};
    char ch;

int main(){
    while (scanf("%c", &ch) != EOF){
        if (!isalpha(ch)) continue;
        if (isupper(ch)) ch = tolower(ch);
        counter[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++){
            printf("%c : %d\n", 'a' + i, counter[i]);
        }
    
    return 0;
}