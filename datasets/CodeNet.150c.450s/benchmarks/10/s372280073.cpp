#include<iostream>
using namespace std;

int main()
{
    int n, i, j, k, b, f, r, v;
    int num[4][3][10];
    
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			for(k = 0; k < 10; k++){
                num[i][j][k] = 0;
			}
		}
	}

    cin >> n;
	for(i = 0; i < n; i++){
        cin >> b >> f >> r >> v;
        num[b - 1][f - 1][r - 1] = num[b - 1][f - 1][r - 1] + v;
	}

	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			for(k = 0; k < 10; k++){
                cout << " " << num[i][j][k];
			}
            cout << endl;
		}
		if(i < 3){
			for(k = 0; k < 20; k++){
				cout << "#";
			}
            cout << endl;
		}
	}

    return 0;
}