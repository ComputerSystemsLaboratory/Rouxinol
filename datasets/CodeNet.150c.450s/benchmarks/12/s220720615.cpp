#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

void print(vector<int>a){
    for(int i=1;i<a.size();i++){
        cout<<"node "<<i<<": key = "<<a[i]<<", ";
        if(i!=1)cout<<"parent key = "<<a[i/2]<<", ";
        if(2*i+1<a.size()){
            cout<<"left key = "<<a[2*i]<<", right key = "<<a[2*i+1]<<", ";
        }else if(2*i<a.size()){
            cout<<"left key = "<<a[2*i]<<", ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    print(a);
}
