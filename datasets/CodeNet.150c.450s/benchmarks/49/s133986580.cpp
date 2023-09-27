#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    while(cin>>n,n){
        vector<int>V(n);
        for(int i=0;i<n;i++)cin>>V[i];
        sort(V.begin(),V.end());
        int sum=0;
        for(int i=1;i<n-1;i++)sum+=V[i];
        sum/=(n-2);
        cout<<sum<<endl;
    }
}