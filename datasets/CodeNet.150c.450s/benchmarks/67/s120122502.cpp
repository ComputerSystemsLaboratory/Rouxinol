#include<bits/stdc++.h>
int sum,cnt;
using namespace std;
int main(){
    int n,tmp;
    while(cin>>n,n){
        cnt=0;
        for(int i=1;i<n;i++){
            sum=0;
            tmp=i;
            while(sum<n){
                sum+=tmp;
                tmp++;
            }
            if(sum==n){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

