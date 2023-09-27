#include<iostream>
using namespace std;
int main(){while(1){int n,a=0,b=0,c,d,s;cin>>n;if(n==0)break;for(int i=0;i<n;i++){cin>>c>>d;s=c+d,b+=s;if(c>d)a+=s;if(c==d)a+=c;}cout<<a<<" "<<b-a<<endl;}return 0;}