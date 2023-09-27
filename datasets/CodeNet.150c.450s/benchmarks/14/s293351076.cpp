#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	string b;
	for (int i=1;i<=a;i++){
	b=to_string(i);
		if (i%3==0)cout<<" "<<i;
		else {
			for (int j=0;j<b.length();j++){
				if (b[j]=='3'){
				cout<<" "<<i;
				break;}
			}
		}
	}
	cout<<endl;
}
