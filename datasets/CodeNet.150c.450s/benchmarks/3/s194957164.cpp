#include <cstdio>
#include <cstring>
#include <vector>

int main()
{
    char str[1001], buff[1001], command[100];
    int q, a, b;

    scanf("%s", str);
    scanf("%d", &q);

    for(int i = 0; i < q; i++){
        scanf("%s", command);
        if(strcmp(command, "print") == 0){
            scanf("%d", &a);
            scanf("%d", &b);
            for(int j = 0; j <= b - a; j++){
                buff[j] = str[a + j];
            }
            buff[b-a+1] = '\0';
            printf("%s\n", buff);
        }
        else if(strcmp(command, "reverse") == 0){
            scanf("%d", &a);
            scanf("%d", &b);
            strcpy(buff, str);
            for(int j = 0; j <= b - a; j++){
                str[a + j] = buff[b - j];
            }
        }
        else if(strcmp(command , "replace") == 0){
            scanf("%d", &a);
            scanf("%d", &b);

            std::vector<char> p(b - a + 2);
            scanf("%s", p.data());

            for(int j = 0; j <= b - a; j++){
                str[a + j] = p[j];
            }
        }
        else {
            printf("ERROR\n");
            break;
        }
    }
    return 0;
}