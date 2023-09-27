#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int N, M;
	while(cin >> N >> M && N > 0){
		vector<int> h(N);
		vector<int> w(M);
		for(int i=0;i<N;i++){
			cin >> h[i];
		}
		for(int i=0;i<M;i++){
			cin >> w[i];
		}
		vector<int> freqh(N*1000, 0);
		for(int i=0;i<N;i++){
			int sum=0;
			for(int j=i;j<N;j++){
				sum += h[j];
				freqh[sum]++;
			}
		}
		vector<int> freqw(M*1000, 0);
		for(int i=0;i<M;i++){
			int sum=0;
			for(int j=i;j<M;j++){
				sum += w[j];
				freqw[sum]++;
			}
		}
		long long int cnt=0;
		for(int i=0;i<min(N*1000, M*1000);i++){
			cnt += freqh[i]*freqw[i];
		}
		cout << cnt << endl;
	}
	return 0;
}
