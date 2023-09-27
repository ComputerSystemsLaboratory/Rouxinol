#include<iostream>
#include<vector>
using namespace std;
int main(){
	while (1){
		int N, A, B, C, x;
		cin >> N >> A >> B >> C >> x;
		if (N == 0 && A == 0 && B == 0 && C == 0 && x == 0)return 0;
		vector<int> Y(N);
		for (int i = 0; i < N; i++){
			cin >> Y[i];
		}
		int f = -1;
		for (int i = 0; i < N; i++){
			while (f <= 10000){
				if(f>=0)x = (x*A + B) % C;
				f++;
				if (x == Y[i])
					break;
			}
		}
		
		//cout << "res:";
		if (f>10000)
			cout << -1 << endl;
		else cout << f << endl;
		

	}


}