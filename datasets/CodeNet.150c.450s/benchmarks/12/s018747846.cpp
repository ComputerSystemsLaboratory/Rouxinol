#include<iostream>
#include<vector>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int h;
    cin>>h;
    vector<int> v(h);
    for(int i=0;i<h;++i)cin>>v[i];
    for(int i=0;i<h;++i){
        cout<<"node "<<i+1<<": key = "<<v[i];
        if(i)cout<<", parent key = "<<v[(i-1)/2];
        if(2*i+1<h)cout<<", left key = "<<v[2*i+1];
        if(2*i+2<h)cout<<", right key = "<<v[2*i+2];
        cout<<", "<<endl;
    }
}