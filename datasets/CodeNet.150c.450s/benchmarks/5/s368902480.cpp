#include<iostream>
#include<vector>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;
int main(){
int n;
cin>>n;
vector<int>in(n);
rep(i,n)cin>>in[i];
rep(i,n-1)cout<<in[n-i-1]<<" ";
cout<<in[0]<<endl;
}