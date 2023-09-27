#include<stdio.h>
#include<math.h>
#include<stack>
int main(){
    using namespace std;
    stack <int>S;
    int a;
    while(~scanf("%d",&a)){
        if(a==0){
            printf("%d\n",S.top());
            S.pop();
        }
        else{
            S.push(a);
        }
    }
}