#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	string a;
	string b = "AC";
	string c = "WA";
	string d = "TLE";
	string e = "RE";
	int p = 0;
	int i = 0;
	int j = 0;
	int q = 0;
	while(n > 0){
		cin >> a;
		if(a == b){
			p += 1;
		}
		else if(a == c){
			i += 1;
		}
		else if(a == d){
			j += 1;
		}
		else if(a == e){
			q += 1;
		}
		n -= 1;
	}
	cout << "AC" << " x " << p << endl;
	cout << "WA" << " x " << i << endl;
	cout << "TLE" << " x " << j << endl;
	cout << "RE" << " x " << q << endl;
}
