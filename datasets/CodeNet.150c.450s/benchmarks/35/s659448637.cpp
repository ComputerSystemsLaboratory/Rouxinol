#define REP(i,n) for (int i=0;i<(n);i++)
#include <iostream>
using namespace std;

int main(){
	int N;
	while(cin >> N && N > 0){
		int a[N];
		REP(i,N){
			cin >> a[i];
		}

		int maximum = a[0];
        REP(i,N){
            int sum = 0;
            for(int j = i; j < N; j++){
					sum += a[j];
                    maximum = max(sum,maximum);
            }
		}
		cout << maximum << endl;
	}
}