#include <stdio.h>

using namespace std;

int main(){
    int N;
    scanf("%d",&N);
    int a,b,c;
    for(int i = 0; i < N; ++i){
        scanf("%d %d %d",&a,&b,&c);
        if(a*a+b*b==c*c || a*a+c*c == b*b || b*b+c*c==a*a) {
            printf("YES\n");
            continue;
        }
        printf("NO\n");
    }
    return 0;
}