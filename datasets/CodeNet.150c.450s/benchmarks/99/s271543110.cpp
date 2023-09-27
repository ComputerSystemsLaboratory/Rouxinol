#include <iostream>
#include <cctype>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){
	int n;
	cin >> n;
	rep(i,n){
		string s1,s2;
		cin >> s1;
		int ans=0;
		rep(j,s1.size()){
			if(isdigit(s1[j])){
				if(s1[j+1]=='m') ans+=(s1[j]-'0')*1000;
				if(s1[j+1]=='c') ans+=(s1[j]-'0')*100;
				if(s1[j+1]=='x') ans+=(s1[j]-'0')*10;
				if(s1[j+1]=='i') ans+=(s1[j]-'0')*1;
				j++;
			}else{
				if(s1[j]=='m') ans+=1000;
				if(s1[j]=='c') ans+=100;
				if(s1[j]=='x') ans+=10;
				if(s1[j]=='i') ans+=1;
			}
		}
		cin >> s1;
		rep(j,s1.size()){
			if(isdigit(s1[j])){
				if(s1[j+1]=='m') ans+=(s1[j]-'0')*1000;
				if(s1[j+1]=='c') ans+=(s1[j]-'0')*100;
				if(s1[j+1]=='x') ans+=(s1[j]-'0')*10;
				if(s1[j+1]=='i') ans+=(s1[j]-'0')*1;
				j++;
			}else{
				if(s1[j]=='m') ans+=1000;
				if(s1[j]=='c') ans+=100;
				if(s1[j]=='x') ans+=10;
				if(s1[j]=='i') ans+=1;
			}
		}
		if(ans/1000>=2) cout << ans/1000;
		if(ans/1000>=1) cout << "m";
		ans%=1000;
		if(ans/100>=2) cout << ans/100;
		if(ans/100>=1) cout << "c";
		ans%=100;
		if(ans/10>=2) cout << ans/10;
		if(ans/10>=1) cout << "x";
		ans%=10;
		if(ans>=2) cout << ans;
		if(ans>=1) cout << "i";
		cout << endl;
	}
}