#include <iostream>
using namespace std;

int main(){
	int rail[11];
	int num=0;
	while(true){
		int now;
		cin >> now;
		if(cin.eof())
			break;
		else if(now ==0){
			cout << rail[num] << endl;
			num--;
		}
		else{
			num++;
			rail[num] = now;
		}
	
	}
	return 0;

}