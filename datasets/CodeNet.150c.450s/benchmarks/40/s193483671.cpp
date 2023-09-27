#include <iostream>
#include <string>
using namespace std;


int main(){
	int label[7];
	cin >> label[1] >> label[2] >> label[3] >> label[4] >> label[5] >> label[6];
	string cmd;
	cin >> cmd;
	
	for(int i = 0;i < 100;i++){
		if(!cmd[i])break;
		if(cmd[i] == 'N'){
			int tmp;
			tmp = label[1];
			label[1] = label[2];
			label[2] = label[6];
			label[6] = label[5];
			label[5] = tmp;
		}
		else if(cmd[i] == 'S'){
			int tmp;
			tmp = label[1];
			label[1] = label[5];
			label[5] = label[6];
			label[6] = label[2];
			label[2] = tmp;
		}
		else if(cmd[i] == 'E'){
			int tmp;
			tmp = label[1];
			label[1] = label[4];
			label[4] = label[6];
			label[6] = label[3];
			label[3] = tmp;
		}
		else if(cmd[i] == 'W'){
			int tmp;
			tmp = label[1];
			label[1] = label[3];
			label[3] = label[6];
			label[6] = label[4];
			label[4] = tmp;
		}
	}
	cout << label[1] << "\n";
	return 0;
}