#include<iostream>
using namespace std;

int main(){
	int  ans, in[10], out[10], i = 0, j = 1;

	while(cin >> in[i]){
		if(in[i] == 0){
			cout << in[i-j] << endl;
			i --;
		}
		else {
			i ++;
		}
	}
	return 0;
}