#include <iostream>
using namespace std;
int main(){
	int r, c;
	cin >> r >> c;
	int arr[r + 1][c + 1];
	for (int j = 0; j <= c ; j++) arr[r][j] = 0;

	for (int i = 0; i < r ; i++){
        arr[i][c] = 0;
		for (int j = 0; j < c ; j++){
            cin >> arr[i][j];
            arr[i][c] += arr[i][j];
            arr[r][j] += arr[i][j];
    	}
    	arr[r][c] += arr[i][c];
	}
    
	for (int i = 0; i <= r ; i++){
		for (int j = 0; j <= c ; j++){
            cout << arr[i][j];
            if(j != c) cout << " ";
            else cout << endl;
    	}
	}

	return 0;
}

