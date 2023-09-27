#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char in[30];
	char out[30];
	cin >> in;
	int length = strlen(in);
	for(int i = 0; i<=length;i++){
		out[i] = in[length -i-1];	
	}
	out[length] = in[length];
	cout << out << endl;
	return 0;
}