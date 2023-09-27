#include<bits/stdc++.h>
using namespace std;

long long t,n,v[205];
long long b[205];
string s;
bool fine;

bool check(long long num){
	
	for(int i=62;i>=0;i--){
		if(num&(1ll<<i))num^=b[i];
	}
	
	return num==0;
}

void add(long long num){
	for(int i=62;i>=0;i--){
		if(num&(1ll<<i)){
			if(b[i]==0){
				b[i]=num;
				break;
			}
			else{
				num^=b[i];
			}
		}
	}
}

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin>>t;
	
	while(t--){
		for(int i=0;i<205;i++)b[i]=0;
		fine=false;
		
		cin>>n;
		for(int i=0;i<n;i++)cin>>v[i];
		cin>>s;
		
		for(int i=n-1;i>=0;i--){
			if(s[i]=='0'){
				add(v[i]);
			}
			else{
				if(check(v[i])==false){
					cout<<"1\n";
					fine=true;
					break;
				}
			}
		}
		
		if(fine==false)cout<<"0\n";
	}

return 0;
}
