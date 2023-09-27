#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
	string str,command,p;
	string X="print",Y="reverse",Z="replace";
	int q,a,b,i,j;
	char w;
	cin >> str;
	cin >> q;
	for(i=0;i<q;i++){
		cin >> command >> a >> b;
		if(command == X){
			for(j=a;j<=b;j++){
				cout << str[j];
			}
			cout << endl;
		}else if(command == Y){
			for(j=0;j<(b-a)/2+1;j++){
				w=str[a+j];
				str[a+j]=str[b-j];
				str[b-j]=w;
			}
		}else if(command == Z){
			cin >> p;
			for(j=a;j<=b;j++) str[j]=p[j-a];
		}
	}
	return 0;
}