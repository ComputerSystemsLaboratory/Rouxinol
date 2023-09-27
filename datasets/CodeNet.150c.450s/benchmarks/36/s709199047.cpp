#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
signed main(){
int a;
while(cin>>a){
    ll s=0;
    for(int b=a;b<600;b+=a){
	s+=a*b*b;
	}
	cout<<s<<endl;
    }
}