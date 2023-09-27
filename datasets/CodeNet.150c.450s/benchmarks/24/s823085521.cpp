#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

long long N, M,sum,t;
pair <long long, long long> p[30000];
int main(){
	while ((cin >> N >> M), N){
		sum = 0;
		for (int i = 0; i < N; i++){
			cin >> p[i].second >> p[i].first;
			sum += p[i].second*p[i].first;
		}
		sort(p, p + N);
		reverse(p, p + N);
		for (int i = 0; i < N; i++){
			if (M <= 0)break;
			int guarded = min(p[i].second, M);
			sum -= p[i].first*guarded;
			M -= guarded;
		}
		cout << sum << endl;
	}
}