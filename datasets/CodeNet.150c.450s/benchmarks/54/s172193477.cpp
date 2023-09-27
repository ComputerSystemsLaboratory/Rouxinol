#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;
int main(){
	string n,s;
	cin>> n;
	int q=0;
	while (cin>> s){
		for (int i=0;i<s.size();i++){
			if (s[i]<97){
				s[i]=s[i]+32;
			}
		}
		if (s==n){
			q++;
		}
	}
	cout<< q<< endl;
}