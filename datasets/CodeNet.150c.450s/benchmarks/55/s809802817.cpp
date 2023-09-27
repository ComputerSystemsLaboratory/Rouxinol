#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	string x;
	while(1){
	int num,k=0;
	cin >> x;
	if(x=="0"){
		break;
	}
	for(int i=0;x[i];i++){
		num=x[i]-'0';
		k+=num;
	}
		cout << k << endl;
	}
return 0;
}