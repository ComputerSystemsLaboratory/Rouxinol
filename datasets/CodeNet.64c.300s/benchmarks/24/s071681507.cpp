#include <iostream>
#include <algorithm>
#include <cstring>
#define rep(i,j) FOR(i,0,j)
#define FOR(i,j,k) for(int i=j;i<k;i++)
using namespace std;
int main(){
	int n;
	while(cin>>n,n){
		int a=0,b=0,c,d;
		rep(i,n){
			cin>>c>>d;
			if(c>d)a+=c+d;
			else if(c<d)b+=c+d;
			else{
				a+=c;
				b+=d;
			}
		}
		cout<<a<<" "<<b<<endl;
	}
}