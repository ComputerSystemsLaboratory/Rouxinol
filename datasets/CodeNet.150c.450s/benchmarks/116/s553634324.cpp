#include<vector>
#include<algorithm>
#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;
int n,k,ma;
int main(){
    for(;;){
        int num[100001]={0},all=0;
        cin>>n>>k;
        if(n==0&&k==0)break;
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        for(int i=0;i<n-k;i++){
            if(i==0){
                for(int j=0;j<k;j++){
                    all+=num[i+j];
                    ma=all;
                }
                continue;
            }
        all=all-num[i-1]+num[i+k-1];
        ma=max(ma,all);
        }
        cout<<ma<<endl;
    }
}