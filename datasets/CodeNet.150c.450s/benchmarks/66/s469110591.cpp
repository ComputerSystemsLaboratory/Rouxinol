#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(void){
    int i,n,m;
    cin>>n;
    vector<string> u(n);
    for(i=0;i<n;i++)
    cin>>u[i];
    int lock=1;
    cin>>m;
    vector<string> t(m);
    for(i=0;i<m;i++){
cin>>t[i];
int l=0;
for(int j=0;j<n;j++){
    if(t[i]==u[j]){
        l++;
        lock=-lock;
        if(lock==-1)
        cout<<"Opened by "<<t[i]<<endl;
        else
        cout<<"Closed by "<<t[i]<<endl;
        break;
    }
}if(l==0)
    cout<<"Unknown "<<t[i]<<endl;
    }
    return 0;
}