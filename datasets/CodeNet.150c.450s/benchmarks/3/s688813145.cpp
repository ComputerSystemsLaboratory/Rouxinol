#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string str,rev,ord,rep;
    int q,a,b;
    cin >> str >> q;
    for(int i = 0;i < q;i++){
    	cin >> ord >> a >> b;
    	if (ord =="print")
    		cout << str.substr(a,b-a+1) << endl;
    	else if(ord == "reverse"){
    		for (int j = 0;j < b-a+1;j++){
    			rev[j] = str[b-j];
    		}
    		for (int j = 0;j < b-a+1;j++){
    			str[a+j] = rev[j];
    		}
    	}
    	else if(ord == "replace"){
    		cin >> rep;
    		for (int j = 0;j < b-a+1;j++){
    			str[a+j] = rep[j];
    		}
    	}
    }
	return 0;
}