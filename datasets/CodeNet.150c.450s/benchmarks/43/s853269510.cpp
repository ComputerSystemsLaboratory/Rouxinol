#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>

using namespace std;

int main(){
	while(1){
		string str;
		getline(cin,str);
		int n = atoi(str.c_str());
		if(n==0)break;
		int scoreA = 0, scoreB = 0;
		while(n--){
			getline(cin,str);
			stringstream ss(str);
			string tmp;
			getline(ss,tmp,' ');
			int a = atoi(tmp.c_str());
			getline(ss,tmp);
			int b = atoi(tmp.c_str());
			if(a>b)scoreA+=(a+b);
			else if(b>a) scoreB+=(a+b);
			else{
				scoreA+=a;
				scoreB+=b;
			}
		}
		cout<<scoreA<<" "<<scoreB<<endl;
	}
	return 0;
}