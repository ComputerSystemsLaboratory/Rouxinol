#include<iostream>
#include<vector>
using namespace std;
int main(){
int a,b,c,d,e;
cin>>a>>b>>c>>d>>e;
if(c-e>=0&&c+e<=a&&d-e>=0&&d+e<=b)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}