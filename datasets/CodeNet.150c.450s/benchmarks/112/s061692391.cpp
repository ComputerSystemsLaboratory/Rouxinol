#include <iostream>
using namespace std;
int main(){
	int n,m;
	while(cin>>n,n){
		char a,b,blist[62] = {0};
		while(n--){
			cin >> a >> b;
			if(a >= 97 && a <= 122)blist[a - 97] = b;
			if(a >= 65 && a <= 90)blist[a - 39] = b;
			if(a >= 48 && a <= 57)blist[a + 4] = b;
		}
		cin >> m;
		string s = "";
		while(m--){
			cin >> a;
			if(a >= 97 && a <= 122)b = blist[a - 97];
			if(a >= 65 && a <= 90)b = blist[a - 39];
			if(a >= 48 && a <= 57)b = blist[a + 4];
			if(b == 0)b = a;
			s+=b;
		}
		cout << s << endl;
	}
}