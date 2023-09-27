#include<iostream>
using namespace std;

int main()
{
	int seito[31] = {0};
	int a;
	
	for(int i = 1; i < 29; i++){
		cin >> a;
		seito[a] = 1;
	}
	
	for(int i = 1; i < 31; i++){
		if(seito[i] == 0){
			cout <<i << endl;
		}
	}
}