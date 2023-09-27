#include<cstdio>

int main(int argc, char const *argv[])
{
    int a, b, result;
    char ope[10];
    while(1){
        scanf("%d %s %d", &a, ope, &b);

        if(ope[0] == '+'){
            result = a +b;
        }
        else if(ope[0] == '-'){
            result = a -b;
        }
        else if(ope[0] == '*'){
            result = a *b;
        }else if(ope[0] == '/'){
            result = a /b;
        }else{
            break;
        }
        printf("%d\n", result);
    }
    
    return 0;
}

