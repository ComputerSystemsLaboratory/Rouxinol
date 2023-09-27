#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int a , b , c;
	char arr[10000]={0};
	int i,j;
	cin >> a >> b >> c;
	for(i=a ; i<=b ; i++ ){
		if(c%i==0) arr[j++]='o';
	}
	cout << strlen(arr) << endl;
	return 0;
}