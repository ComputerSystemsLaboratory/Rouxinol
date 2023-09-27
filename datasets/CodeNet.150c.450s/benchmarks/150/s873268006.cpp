#include<iostream>
using namespace std;

int bukket[10001];

int main(){
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;
	while(cin >> num){
		bukket[num] ++;
	}

	for(int i = 0; i < 10001; i++){
		if(bukket[i] > 0){
			cout << i;
			bukket[i] --;
			break;
		}
	}


	for(int i = 0; i < 10001; i++){
		while(bukket[i] > 0){
			cout << " " << i;
			bukket[i] --;
		}
	}

	cout << endl;
	

	return 0;
}