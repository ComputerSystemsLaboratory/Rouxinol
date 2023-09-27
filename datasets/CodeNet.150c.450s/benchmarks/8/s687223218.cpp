#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,aa=0,bb=0;
	string a,b;
	cin >> n;
	while(n--){
		cin >> a >> b;
		if(a>b)aa+=3;
		else if(a<b)bb+=3;
		else aa++,bb++;
	}
	cout << aa << ' ' << bb << endl;
}
