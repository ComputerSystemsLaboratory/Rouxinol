#include<iostream>

using namespace std;

int main(){
	int count = 0;
	int counter = 0;
	int a[10000][3];
	while (1){
		for (int i = 0; i < 3; i++){
			cin >> a[count][i];
		}
		if (a[count][0] == -1 && a[count][1] == -1 && a[count][2] == -1){
			break;
		}
		count += 1;
	}
	while (1){
		if (a[counter][0] == -1 || a[counter][1] == -1){
			cout << "F" << endl;
		}
		else if (a[counter][0] + a[counter][1] >= 80){
			cout << "A" << endl;
		}
		else if (a[counter][0] + a[counter][1] >= 65){
			cout << "B" << endl;
		}
		else if (a[counter][0] + a[counter][1] >= 50){
			cout << "C" << endl;
		}
		else if (a[counter][0] + a[counter][1] >= 30){
			if (a[counter][2] >= 50){
				cout << "C" << endl;
			}
			else{
				cout << "D" << endl;
			}
		}
		else{
			cout << "F" << endl;
		}
		counter += 1;
		if (counter == count){
			break;
		}
	}
	return 0;
}