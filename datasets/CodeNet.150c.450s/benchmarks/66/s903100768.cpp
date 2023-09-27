#include <iostream>
#include <cstring>
using namespace std;

int main(){

	int N;
	int state = 1; //??????
	cin >> N;
	char ID[N][11];
	for (int i = 0; i <= N-1; i++){
		cin >> ID[i];
	}

	int M;
	cin >> M;
	char IC[M][11];

	for (int i = 0; i <= M-1; i++){
		cin >> IC[i];
		int check = 0;
		for (int j = 0; j<= N-1; j++){
			if(strcmp(IC[i],ID[j]) == 0){
				if (state == 1){
					state = 0;
					check = 1;
					cout << "Opened by" << " " << ID[j] << endl;
				}
				else if (state == 0){
					state = 1;
					cout << "Closed by" << " " << ID[j] << endl;
					check = 1;
				}
			}
		}
		if (check == 0){
				cout << "Unknown" << " " << IC[i] << endl;
			}
	}
}