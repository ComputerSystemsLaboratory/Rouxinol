#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string lower(string x){
string y = x;
for(int i = 0; i <= x.size(); i++){ y[i] = tolower(x[i]);}
return y;
}


int main(){
	int n;
	string a, b;
	cin >> a;
	a = lower(a);
	while(cin >> b){ if(b == "END_OF_TEXT"){break;} b = lower(b); if(a == b){n++;} }
	cout << n << endl;

return 0;
}