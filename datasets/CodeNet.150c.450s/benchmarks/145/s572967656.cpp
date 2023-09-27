#include<bits/stdc++.h>
using namespace std;

int main() {
	std::string s;
	int max=0;
	int maxv=0;
	string maxval;
	string maxlen;
	map<string,int> m;
	while(cin>>s){
		if(s.length()>max){
			max=s.length();
			maxlen=s;
		}
		m[s]++;
		if(maxv<m[s]){
			maxval=s;
			maxv=m[s];
		}
	}
	cout<<maxval<<" "<<maxlen<<endl;
}