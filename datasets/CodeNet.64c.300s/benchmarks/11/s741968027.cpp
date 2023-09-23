#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int s=0;
	int h=0,m=0;
	cin >> s;
	h=s/3600;
	s%=3600;
	m=s/60;
	s=s%60;
	cout << h << ":" << m << ":" << s << endl;
}