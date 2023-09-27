#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	int c=0;
	cin>>a;
	for(int i=0;i<a.length();i++){
		if('A'<=a[i]&&a[i]<='Z')a[i]=a[i]-'A'+'a';
	}
	for(int j=0;;j++){
		cin>>b;
		if(b=="END_OF_TEXT")break;
		for(int k=0;k<b.length();k++){
			if('A'<=b[k]&&b[k]<='Z')b[k]=b[k]-'A'+'a';
		}
		if(a==b)c++;
	}
	cout << c<<endl;
	return 0;
}