#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> a;
    int n;
    cin>>n;
    while(n--){
        int t;
        for(int i=0;i<3;i++){
            cin>>t;
            a.push_back(t);
        }
        sort(a.begin(),a.end());
        if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        a.clear();
    }
}