#include <iostream>
using namespace std;

int main(){
	int i = 0;
	while (1){
		i++;
		int num;
		cin >> num;
		if (num == 0){ break; }
		else{
			cout <<"Case "<<i<<": "<< num<<"\n";
		}
	}
	return 0;
}