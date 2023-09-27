#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int tod(string a){
	int n=a.size();
	int res=0;
	size_t cur=0;
	while(cur<n){
		int tmp=1;
		if(isdigit(a[cur]))
			tmp=(a[cur++]-'0');
		if(a[cur]=='m')
			tmp*=1000;
		else if(a[cur]=='c')
			tmp*=100;
		else if(a[cur]=='x')
			tmp*=10;
		res+=tmp;
		cur++;
	}
	return res;
}

string tos(int a){
	string res="";
	int cur=1000;
	while(a){
		int tmp=a/cur;
		if(tmp>=2)
			res+=(tmp+'0');
		if(tmp){
			switch(cur){
				case 1000:
					res+='m';
					break;
				case 100:
					res+='c';
					break;
				case 10:
					res+='x';
					break;
				case 1:
					res+='i';
					break;
			}
		}
		a-=tmp*cur;
		cur/=10;
	}
	return res;
}

int main(void){
	int n;
	cin >> n;
	for(int loop=0;loop<n;loop++){
		string a,b;
		cin >> a >> b;
		int aa,bb,cc;
		aa=tod(a);bb=tod(b);
		cc=aa+bb;
		string c=tos(cc);
		cout << c << endl;
	}
	return 0;
}