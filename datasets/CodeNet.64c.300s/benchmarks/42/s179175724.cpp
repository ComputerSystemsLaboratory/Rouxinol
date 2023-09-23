#include <iostream>
using namespace std;

int main() {

	while(1){
		int N;
		cin >> N;
		if(N == 0) break;
		int x[N], y[N], z[N];
		for(int i = 0; i < N; i++){
			cin >> x[i] >> y[i];
			z[i] = 0;
		}
/*
		for(int i = 0; i < N; i++){
			cout << x[i] << " " << y[i] << " " << z[i] << endl;
		}
*/

		int M;
		cin >> M;
		char d_temp;
		int d[M], l[M];
		for(int i = 0; i < M; i++){
			cin >> d_temp >> l[i];
			if(d_temp == 'N'){
				d[i] = 0;
			}else if(d_temp == 'E'){
				d[i] = 1;
			}else if(d_temp == 'S'){
				d[i] = 2;
			}else if(d_temp == 'W'){
				d[i] = 3;
			}
		}
/*
		for(int i = 0; i < M; i++){
			cout << d[i] << " " << l[i] << endl;
		}
*/

		int nowx = 10, nowy = 10;
		for(int i = 0; i < M; i++){
			for(int j = 0; j < l[i] ; j++){
				if(d[i] == 0){
					nowy++;
				}else if(d[i] == 1){
					nowx++;
				}else if(d[i] == 2){
					nowy--;
				}else if(d[i] == 3){
					nowx--;
				}
//				cout << nowx << " " << nowy << endl;
				for(int k = 0; k < N; k++){
					if(nowx == x[k] && nowy == y[k]) z[k] = 1;
				}
			}
		}
/*
		for(int i = 0; i < N; i++){
			cout << x[i] << " " << y[i] << " " << z[i] << endl;
		}
*/

		int result = 1;
		for(int i =0; i < N; i++){
			if(z[i] == 0) result = 0;
		}
		if(result){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}

	return 0;
}