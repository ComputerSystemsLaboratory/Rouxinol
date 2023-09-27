#include <cstdio>
using namespace std;
int main(void){
    int sum;
    while(true){
        char ch;
        scanf("%c", &ch);
        if(ch == '0' && sum == 0) break;
        else if(ch == '\n'){
            printf("%d\n", sum);
            sum = 0;
        } else sum += ch - 48;
    }

    return 0;
}

