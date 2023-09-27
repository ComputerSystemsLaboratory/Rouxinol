#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	string str, ope, p, str_rev;
	int q, a, b;
	cin >>str >>q;
	for(int i=0; i<q; i++){
		cin >>ope >>a >>b;
		if(ope=="replace"){
			cin >>p;
			str.replace(a, p.size(), p);
		}else if(ope=="reverse"){
			str_rev=str.substr(a, b-a+1);
			reverse(str_rev.begin(), str_rev.end());
			str.replace(a, str_rev.size(), str_rev);
		}else{
			cout <<str.substr(a, b-a+1) <<endl;
		}
	}
    return 0;
}