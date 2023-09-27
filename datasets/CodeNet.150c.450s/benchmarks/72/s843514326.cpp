#include <bits/stdc++.h>

using namespace std;

int main() {
	
	string a;
	getline(cin,a);
	
	for(int i = 0; i < a.size(); ++i){
		if(a[i] >= 'a' && a[i] <= 'z')a[i] = toupper(a[i]);
		else if(a[i] >= 'A' && a[i] <= 'Z')a[i] = tolower(a[i]);
	}
	
	cout<<a<<'\n';
	
}
