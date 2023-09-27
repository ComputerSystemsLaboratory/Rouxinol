#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int tuki, hi, k = 0;
	int nissuu[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
	string youbi[7] = {"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
	string out[100];
	while(cin >> tuki >> hi){
		if(tuki == 0){
			break;
		}
		int a = 0;
		for(int i = 0; i < tuki-1; i++){
			a = a+nissuu[i];
		}
		a = (a+hi)%7;
		out[k] = youbi[a];
		k++;
	}
	for(int i = 0; i < k; i++){
		cout << out[i] << endl;
	}
}