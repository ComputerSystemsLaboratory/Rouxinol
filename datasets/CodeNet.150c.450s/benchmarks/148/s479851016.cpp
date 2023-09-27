#include <bits/stdc++.h>
using namespace std;
int main(){
		int c_ac=0, c_wa=0, c_tle=0, c_re=0;
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		if(s =="AC") c_ac++;
		if(s== "WA") c_wa++;
		if(s=="TLE" ) c_tle++;
		if(s== "RE") c_re++;
	}
	cout<<"AC x "<<c_ac<<endl;
		cout<<"WA x "<<c_wa<<endl;
			cout<<"TLE x "<<c_tle<<endl;
				cout<<"RE x "<<c_re<<endl;
	return 0;

}

