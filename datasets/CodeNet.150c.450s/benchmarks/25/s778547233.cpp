#include <cstdio>
#include <cctype>
using namespace std;
int main(void){
    int arr[26] = {};
    char ch;
    while(scanf("%c", &ch) != EOF)
        if(isalpha(ch)) arr[tolower(ch) - 'a']++;
    for(int i = 0; i < 26; i++) printf("%c : %d\n", 'a' + i, arr[i]);

    return 0;
}

