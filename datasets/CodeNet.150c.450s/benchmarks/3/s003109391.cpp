#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string S,s;
int n,a,b;

int main(){
	cin >> S;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s >> a >> b;
		if(s == "print"){
			string t = S.substr(a,b-a+1);
			cout << t << endl;
		}else if(s=="reverse"){
			reverse(S.begin()+a,S.begin()+b+1);
		}else{
			string u;
			cin >> u;
			S.replace(a,b-a+1,u);
		}
	}
}
