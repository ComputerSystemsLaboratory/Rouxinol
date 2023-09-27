#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define mod 1000000007
using namespace std;
int main(){
    vector<int> num;
    int inputNum;
    while(true){
        cin>>inputNum;
        if(inputNum==0){
            break;
        }
        num.push_back(inputNum);
    }
    int n=num.size();
    rep(i,n){
        cout<<"Case "<<i+1<<": "<<num[i]<<endl;
    }
}
