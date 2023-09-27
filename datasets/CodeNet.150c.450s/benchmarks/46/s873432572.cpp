#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        for(;;){
                int n,x;
                int ans=0;
                scanf("%d %d",&n,&x);
                if(!n) break;
                for(int i=1;i<n-1;i++){
                        for(int j=i+1;j<n;j++){
                                for(int k=j+1;k<n+1;k++){
                                        if(i+j+k==x){
                                                ++ans;
                                        }
                                }
                        }
                }
                printf("%d\n",ans);
        }
        return 0;
}