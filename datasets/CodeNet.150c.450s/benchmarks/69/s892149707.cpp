#include<iostream>

using namespace std;

int main(){
	int N;

	cin >> N;

	for (int i = 0; i < N; i++){
		int  b = 1, c = 1;
		int num[10];
		int B[11] = { 0 }, C[11] = { 0 };
		bool flag = false;
		

		for (int i = 0; i < 10; i++){
			cin >> num[i];
		}

		for (int i = 0; i < 10; i++){
			if (B[b-1] < num[i]){
				//cout << "B" << B[b-1] << ' '<< num[i]<< endl;
				B[b] = num[i];
				b++;
			}
			else{
				//cout << "C" << C[c - 1] << ' ' << num[i] << endl;
				if (C[c-1] < num[i]){
					C[c] = num[i];
					c++;
				}
				else{
					flag = true;
					break;
				}

			}
		}

		if (flag == false) cout << "YES" << endl;
		if (flag == true) cout << "NO" << endl;
	}
}
		