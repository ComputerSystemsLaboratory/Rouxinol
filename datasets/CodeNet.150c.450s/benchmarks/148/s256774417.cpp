#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int A=0,B=0,C=0,D=0;
	vector<string> s(n);
	vector<char> a(n);
	for(int i=0;i<n;i++){
		cin>>s[i];
		a[i]=s[i].at(0);
		if(a[i]=='A'){
			A++;
		}
		else if(a[i]=='W'){
			B++;
		}
		else if(a[i]=='T'){
			C++;
		}
		else if(a[i]=='R'){
			D++;
		}
	}
    cout<<"AC "<<"x "<<A<<endl;
    cout<<"WA "<<"x "<<B<<endl;
	cout<<"TLE "<<"x "<<C<<endl;
	cout<<"RE "<<"x "<<D<<endl;
}