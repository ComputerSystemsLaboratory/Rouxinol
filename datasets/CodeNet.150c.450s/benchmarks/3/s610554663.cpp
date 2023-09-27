#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string s,t,w,c;
	int n,a,b;

	cin >>s >>n;
	for(int i=0;i<n;++i){
		cin >>t;
		if(t=="print"){
			cin >>a >>b;
			w = s.substr(a,b-a+1);
			cout <<w <<endl;
		}else if(t=="reverse"){
			cin >>a >>b;
			w = s.substr(a,b-a+1);
			reverse(w.begin(),w.end());
			s.replace(a,w.size(),w);
		}else{
			cin >>a >>b >>c;
			s = s.replace(a,b-a+1,c);
		}
	}
	return 0;
}