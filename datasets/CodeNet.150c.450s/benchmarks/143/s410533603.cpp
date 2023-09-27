#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include<set>
#include<map>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	vector<long long> A(N);
	vector<long long> cnt(100001);
	long long sum=0;
	for (int i = 0; i < N; ++i) 
	{
		cin >> A[i];
		sum += A[i];
		++cnt[A[i]];
	}
	
	int Q;
	cin >> Q;
	vector<long long> ans(Q);
	for (int i = 0; i < Q; ++i)
	{
		long long B, C;
		cin >> B >> C;

		if (cnt[B] == 0)
		{
			ans[i] = sum;
			continue;
		}

		sum -= (B * cnt[B] + C * cnt[C]);
		cnt[C] += cnt[B];
		cnt[B] = 0;
		sum += C * cnt[C];
		ans[i] = sum;
	}

	for (int i = 0; i < Q; ++i) cout << ans[i] << endl;
}