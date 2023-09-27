#include<cstdio>
#include<cctype>
using namespace std;
int main(){
    char x;
    for(int i=0;i<1200;i++){
        scanf("%c",&x);
        if(isupper(x)) {
            printf("%c",tolower(x));
        }
        else if(islower(x)) {
            printf("%c",toupper(x));
        }
        else printf("%c",x);
        if(x=='\n') {
            break;
        }
    }
}
