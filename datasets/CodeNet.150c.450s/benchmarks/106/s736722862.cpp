#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        int a,b,c;
        int ans=0;
        scanf("%d %d %d",&a,&b,&c);
        for(int i=a;i<=b;i++){
                if(c%i==0){
                        ans+=1;
                }
        }
        printf("%d\n",ans);
        return 0;
}