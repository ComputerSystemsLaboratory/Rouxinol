#include <iostream>
using namespace std;

int T[100];
int H[100];
int main(){
	int n, m;
	int Half,Tsum, Hsum;
	int Tn, Hn,Tans,Hans;
	while (1){
		cin >> n >> m;
		if (n == 0 && m == 0) break;
		Tsum = Hsum = 0;

		for (int i = 0; i < n; i++){
			cin >> T[i];
			Tsum += T[i];
		}
		for (int i = 0; i < m; i++){
			cin >> H[i];
			Hsum += H[i];
		}
		int flg = 0;
		if ((Hsum + Tsum) % 2 == 0){
			Half = (Hsum + Tsum) / 2;
			for (int i = 0; i < n; i++){
				Tn = Half - (Tsum - T[i]);
				for (int j = 0; j < m; j++){
					if (Tn == H[j]){
						Hn = Half - (Hsum - H[j]);
						if (Hn == T[i]){
							Tans = T[i];
							Hans = H[j];
							flg = 1;
							break;
						}
					}
				}
				if (flg == 1) break;
			}
		}
		if (flg == 1){
			cout << Tans << " " << Hans << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
	return 0;
}