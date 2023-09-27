#include <iostream>
#include <string>
using namespace std;

void swap(char *a,char *b){
	int w=*a;
	*a=*b;
	*b=w;
}
int main(){
	string str;
	cin >> str;
	for(int i=0;i<str.size()/2;i++){
		swap(str[i],str[str.size()-i-1]);
	}
	cout << str << endl;

		return 0;
}