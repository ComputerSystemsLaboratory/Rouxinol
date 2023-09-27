#include <iostream>

using namespace std;

int faces[1+6];

void roll(int f){
	int tmp = faces[f];
	faces[f] = faces[1];
	faces[1] = faces[7-f];
	faces[7-f] = faces[6];
	faces[6] = tmp;
}

int main(){
	int input[1+6];
	for(int i = 1; i <= 6; i++){
		cin >> input[i];
	}

	int n, top, front, right, topNum;
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 1; j <= 6; j++){
			faces[j] = input[j];
		}
		cin >> top >> front;
		for(int j = 1; j <= 6; j++){
			if(top == faces[j]){
				top = j;
				continue;
			}
			if(front == faces[j]){
				front = j;
				continue;
			}
		}

		topNum = faces[top];
		switch(front){
		case 6:
			break;
		case 1:
			roll(top); roll(top);
			break;
		default:
			roll(front);
			break;
		}

		for(int i = 1; i <= 6; i++){
			if(topNum == faces[i]){
				top = i;
				break;
			}
		}

		switch(top){
		case 2:
			right = 3;
			break;
		case 3:
			right = 5;
			break;
		case 5:
			right = 4;
			break;
		case 4:
			right = 2;
			break;
		}

		cout << faces[right] << endl;
	}

	return 0;
}