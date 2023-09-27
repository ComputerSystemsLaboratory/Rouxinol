#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <queue>
using namespace std;
int main(void){
    int n;
    cin>>n;
    vector<string> u(n);
    for(int i=0;i<n;i++)cin>>u[i];
    int m;
    cin>>m;
    int a=0;
    for(int i=0;i<m;i++){
        string t;
        cin>>t;
        for(int j=0;j<n;j++){
            if(t==u[j]){
                if(a==0){
                    cout<<"Opened by "<<t<<endl;
                    a=1;
                }
                else{
                    cout<<"Closed by "<<t<<endl;
                    a=0;
                }
                break;
            }
            if(j==n-1)cout<<"Unknown "<<t<<endl;
        }
    }
    return 0;
}

