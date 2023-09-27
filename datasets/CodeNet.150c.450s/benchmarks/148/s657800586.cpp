#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<char,int> m;
	while(n--){
		string str;
		cin>>str;
		if(str[0]=='A'){
			m['A']++;
		}else if(str[0]=='T'){
			m['T']++;
		}else if(str[0]=='R'){
			m['R']++;
		}else{
			m['W']++;
		}
	}
	cout<<"AC x "<<m['A']<<"\n";
	cout<<"WA x "<<m['W']<<"\n";
	cout<<"TLE x "<<m['T']<<"\n";
	cout<<"RE x "<<m['R']<<"\n";
	return 0;
}