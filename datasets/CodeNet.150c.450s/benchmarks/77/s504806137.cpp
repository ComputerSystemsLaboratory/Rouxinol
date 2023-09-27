#include <iostream>
using namespace std;

int main(){
	int N;
	int M;
	while (cin >> N && N > 0){
		int x_point = 10;
		int y_point = 10;
		int x[N];
		int y[N];
		int count = 0;
		for (int i = 0; i <= N-1; i++){
			cin >> x[i] >> y[i];
		}

		cin >> M;
		char d[M+1];
		int l[M];
		for (int i = 0; i <= M-1; i++){
			cin >> d[i] >> l[i];
		}

		for (int i = 0; i <= M-1; i++){
			while (l[i] > 0){
				//cout << "x_point:" << x_point << "y_point:" << y_point << endl;
				//cout << "i:" << i << endl;
				//cout << "d[i]:" << d[i] << endl;
				for (int j = 0; j <= N-1; j++){
					if ((x_point == x[j])&&(y_point == y[j])){
						count++;
						x[j] = 100;
						y[j] = 100;
					}
				}
				if (d[i] == 'N'){
					y_point++;
					l[i]--;
				}
				else if (d[i] == 'E'){
					x_point++;
					l[i]--;
				}
				else if (d[i] == 'S'){
					y_point--;
					l[i]--;
				}
				else if (d[i] == 'W'){
					x_point--;
					l[i]--;
				}

				if (l[i] == 0){

				//cout << "x_point:" << x_point << "y_point:" << y_point << endl;
				//cout << "i:" << i << endl;
				//cout << "d[i]:" << d[i] << endl;
				for (int j = 0; j <= N-1; j++){
					if ((x_point == x[j])&&(y_point == y[j])){
						count++;
						x[j] = 100;
						y[j] = 100;
					}
				}

			}
			}
		}
		if (count == N){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
		//cout << count << endl;
	}
}