#include<iostream>
#include<stdio.h>

using namespace std;

int main(){


    int n,k,ans=0,ans2=0,mx=0;
    while(1){
    scanf("%d%d",&n,&k);
    if(n==0&&k==0)break;
    int num[n];
    //for(int y=0;y<n;y++){
      //  scanf("%d",&num[y]);
    //}
        for(int a=0;a<k;a++){
                cin >> num[a];
        ans+=num[a];
        }
        mx=ans;
    for(int j=k;j<n;j++){
            cin >> num[j];
        ans2=ans-num[j-k]+num[j];
        if(mx<=ans2){
            mx=ans2;
        }
    ans=ans2;
    ans2=0;
    }
    printf("%d\n",mx);
    mx=0;
    ans=0;
    }

return 0;
}