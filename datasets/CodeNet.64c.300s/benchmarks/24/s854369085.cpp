#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cctype>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        if(n==0)break;
        int ans1=0;
        int ans2=0;
        int num,sum;
        for(int i=0; i<n; i++){
            cin>>num>>sum;
            if(num>sum){
                ans1+=num;
                ans1+=sum;
            }
            if(num<sum){
                ans2+=num;
                ans2+=sum;
            }
            if(num==sum){
                ans1+=num;
                ans2+=sum;
            }
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
    return 0;
}