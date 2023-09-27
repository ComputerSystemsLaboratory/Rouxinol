#include <iostream>

#define MAX_P 10
#define rep(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main(void)
{
	int N;
	long M;
	while(cin >> N >> M, N > 0){
		long D[MAX_P + 1];
		long result = 0;
		//配列Dを初期化
		rep(i, MAX_P + 1){
			D[i] = 0;
		}
		//配列Dを構成
		rep(i, N){
			int d, p;
			cin >> d >> p;
			D[p] += d;
		}
		rep(i, MAX_P + 1){
			if (M >= D[MAX_P - i]){
				M -= D[MAX_P - i];
			}else if(M > 0){
				result += (D[MAX_P - i]-M) * (MAX_P - i);
				M = 0;
			}else{
				result += D[MAX_P - i] * (MAX_P - i);
			}
		}
		cout << result << endl;
	}
	return 0;
}
