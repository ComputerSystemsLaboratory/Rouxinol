#include<iostream>
#include<sstream>

using namespace std;

int toNumber(string s){
	int n=0,m=1;
	for(int i=0;i<s.length();i++){
		int k=1;
		switch(s.at(i)){
			case 'm':
				k*=10;
			case 'c':
				k*=10;
			case 'x':
				k*=10;
			case 'i':
				n+=k*m;
				m=1;
				break;
			default:
				if('0'<=s.at(i)&&s.at(i)<='9'){
					m=s.at(i)-'0';
				}
				break;
		}
	}
	return n;
}

string d="mcxi";

string fromNumber(int n){
	ostringstream s;
	for(int i=0;i<d.length();i++){
		int m=1;
		for(int j=0;j<d.length()-i-1;j++)m*=10;
		if(n/m>0){
			if(n/m>1){
				char c=n/m+'0';
				s << c;
			}
			s << d.at(i);
			n=n%m;
		}
	}
	return s.str();
}

int main(){
	ostringstream out;

	int n;
	string a,b;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		int na,nb;

		na=toNumber(a);
		nb=toNumber(b);

		out << fromNumber(na+nb) << endl;
	}


	cout << out.str();
	return 0;
}