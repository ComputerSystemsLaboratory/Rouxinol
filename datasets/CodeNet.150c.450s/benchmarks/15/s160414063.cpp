#include<stdio.h>
using namespace std;
int s[100009],t[100009];
int main(){
    int n,q,x=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d",&t[i]);
    }
    for(int i=0;i<q;i++){
        for(int j=0;j<n;j++){
            if(t[i]==s[j]){
                x++;
                break;
            }
        }
    }
    printf("%d\n",x);
    return 0;
}