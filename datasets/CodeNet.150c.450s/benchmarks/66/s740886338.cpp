#include <bits/stdc++.h>
using namespace std;
int main(void){
    // Your code here!
    int n,m;
    cin>>n;
    bool status=0;
    string u[300];
    string t[300];
    for(int i=0;i<n;i++)cin>>u[i];
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>t[i];
        int check=0;
        for(int j=0;j<n;j++){
            if(t[i]==u[j])check=1;
        }
        if(!check){
            cout<<"Unknown "<<t[i]<<endl;
        }else{
            if(!status){
                cout<<"Opened by "<<t[i]<<endl;
            }else{
                cout<<"Closed by "<<t[i]<<endl;
            }
            status=!status;
        }
    }
    return 0;
}
