#include <iostream>
using namespace std;
int n,A[50];

bool solve(int m,int j){
    if (m==0)return 1;
    if(j>=n)return 0;
    int res=solve(m, j+1)||solve(m-A[j], j+1);
    return res;
}

int main(){
    int q,m;
    cin>>n;
    for (int i=0; i<n; i++)cin>>A[i];
    cin>>q;
    for (int i=0; i<q; i++) {
        cin>>m;
        if(solve(m, 0)){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
