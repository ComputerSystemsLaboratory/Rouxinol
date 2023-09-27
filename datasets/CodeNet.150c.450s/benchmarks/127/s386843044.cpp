#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		set<string> s;
		string input ,a,b;
		cin>>input;
		for(int m=1;m<input.size();m++){
			a=input.substr(0, m);
			b=input.substr(m,input.size());
			for(int i=0;i<4;i++){
				if(i&1)reverse(a.begin(),a.end());
				else   reverse(b.begin(),b.end());
				s.insert(a+b);
				s.insert(b+a);
			}
		}
		cout<<s.size()<<endl;
	}
	return 0;
}