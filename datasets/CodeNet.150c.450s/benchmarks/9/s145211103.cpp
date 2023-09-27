#include<iostream>
#include <string>
using namespace std;
 
int main() {
	string n;
	int a,h;


	while(1){
		cin >> n;
		if( n=="-" ) break;

		cin >> a;
		for(int i=0;i<a;i++){
        cin >> h;
        n=n.substr(h)+n.substr(0,h);
        }
        cout << n << "\n";
    }

    return 0;
}