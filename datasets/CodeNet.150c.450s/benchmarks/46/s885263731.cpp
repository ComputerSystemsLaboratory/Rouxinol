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
                int a=0;
                scanf("%d %d",&n,&x);
                if(!n) break;
                for(int i=1;i<n-1;i++){
                        for(int j=i+1;j<n;j++){
                                int c=x-i-j;
                                if(c>j && c<=n) a+=1;
                        }
                }
                printf("%d\n",a);
        }
        return 0;
}