#include<bits/stdc++.h>
using namespace std;

int main(){
	string pri = "print", rev = "reverse", rep = "replace", str;
	int q;
	
	cin>>str>>q;
	
	for(int i = 0; i < q; i++){
		int a, b;
		string o, p, temp = "";

		cin>>o;
		cin>>a>>b;

		if(o == pri){
			for(int j = a; j <= b; j++) cout<<str[j];
			cout<<endl;
		}
		if(o == rev){
			for(int j = b; j >= a; j--)
				temp += str[j];
			str.replace(a, b - a + 1, temp);
		}
		if(o == rep){
			cin>>p;
			str.replace(a, b - a + 1, p);
		}
	}
	
	return 0;
}
