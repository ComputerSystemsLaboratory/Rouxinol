#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	getline (cin , a);
	for(int i=0 ; i<1200 ; i++){
		if(a[i]=='\0') break;
		if(a[i]>='a' && a[i]<='z'){
			a[i]-=0x20;
		} else if (a[i]>='A' && a[i]<='Z'){
			a[i]+=0x20;
		}
		if (a[i]==' '){
			cout << " ";
		} else {
		cout << a[i];
		}	
	}
	cout << endl;
	return 0;
}