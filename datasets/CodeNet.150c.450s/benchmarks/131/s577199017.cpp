#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
#include<functional>
using namespace std;
#define all(v) v.begin(),v.end()
#define indexOf(v,x) (find(all(v),x)-v.begin())
	
string to_s(int n){
	stringstream ss;
	ss<<n;
	string s;
	ss>>s;
	return s;
}
int to_i(string s){
	int res=0;
	for(int i=0;i<s.size();i++){
		res *= 10;
		res += s[i]-'0';
	}
	return res;
}
int main(){
	int a,b,c,L;
	string s;
	while(cin>>a>>L,a||L){
		vector<int> v;
		v.push_back(a);
		while(1){
			s = to_s(a);
			s += string(L-s.size(),'0');
			sort(all(s),greater<char>());
			b = to_i(s);
			sort(all(s));
			c = to_i(s);
			a = b-c;
			int k = indexOf(v,a);
			if(k!=v.size()){
				cout<<k<<' '<<a<<' '<<v.size()-k<<endl;
				break;
			}
			v.push_back(a);
		}
	}
	return 0;
}