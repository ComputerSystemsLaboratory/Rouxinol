#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    int limit;
    scanf("%d",&n);
    printf("%d:",n);
    limit = sqrt(n) ;
    for(int i = 2;i <= n ;){
        if(n%i == 0){
        printf(" %d",i);
         n /=i;
        }
        else i++;
        
        if(i > limit) {printf(" %d",n);break;}
    }
    putchar('\n');
    
    return 0;
}
