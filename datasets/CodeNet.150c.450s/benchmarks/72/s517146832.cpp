#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	int N,n;
	getline(cin,str);
	for(int i=0;i<str.size();i++){
		n=(int)str[i]-(int)'a';
		N=(int)str[i]-(int)'A';
		if(0<=n && n<=26){
			cout << (char)(n+(int)'A');
		}else if(0<=N && N<=26){
			cout << (char)(N+(int)'a');
		}else cout << str[i];
	}
	cout << endl;
	return 0;
}