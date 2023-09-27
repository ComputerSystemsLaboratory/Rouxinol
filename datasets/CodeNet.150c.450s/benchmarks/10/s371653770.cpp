#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	//?????????
	int num_of_people[4][3][10];
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 10; k++){
				num_of_people[i][j][k] = 0;
			}
		}
	}
	//??\???
	int count;
	cin >> count;
	for(int i = 0; i < count; i++){
		int b,f,r,v;
		cin >> b >> f >> r >> v;
		num_of_people[b - 1][f - 1][r - 1] += v;	
	}
	//??????
	for (int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 10; k++){
				cout << " " << num_of_people[i][j][k];
				if (k == 10 - 1){
					cout << "\n";
				}
			}
		}
		if (i != 4 - 1){
			cout << "####################\n";
		}
	}
}