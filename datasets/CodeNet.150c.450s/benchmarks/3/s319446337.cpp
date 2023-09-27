#include <iostream>
#include <string>
using namespace std;

int main(){
	int q,a,b;
	string str,odr,p,pri;
	cin >> str >> q;

	for(int i=0; i<q; i++){

		cin >> odr;
        
        if( odr == "print"){
        	cin >> a >> b;
        	cout << str.substr(a,b-a+1) << endl; //no problem
        	//pri = str.substr(a-1,b-a+1);
        	//cout << pri;
        }
        
        else if( odr == "reverse"){
        	cin >> a >> b;
        	string rev=str.substr(b,1);
        	for(int i=0; i<b-a; i++){
        	    rev += str.substr(b-i-1,1);
        	}
        	str = str.replace(a,b-a+1,rev);

        } else {
            cin >> a >> b >> p;
            str = str.replace(a,b-a+1,p);     	
        }
	}

	return 0;
}