#include <cstdio>
#include <cstring>
#include <cctype>

int main()
{
    char W[10],T[1000];
    int counter = 0;
    int T_length;

    scanf("%s", W);
    for(int i = 0; W[i] != '\0'; i++){
        if(isupper(W[i])) W[i] = tolower(W[i]);
    }

    while(scanf("%s", T) != EOF){
        T_length  = strlen(T);
        for(int i = 0; T[i] != '\0'; i++){
            if(isupper(T[i])) T[i] = tolower(T[i]);
        }
        if(strcmp(T, W) == 0){
            counter++;
        }
    }
    printf("%d\n", counter);

    return 0;
}