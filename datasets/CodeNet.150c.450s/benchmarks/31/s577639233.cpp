#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    int n,r;
    cin>>n;
    
    
    int maxv=-2000000000, minv=2000000000;
    
    for(int i=0; i<n; i++){
        cin>>r;
        maxv=max(maxv, r-minv);
        minv=min(minv, r);
    }
    cout<<maxv<<endl;
}

