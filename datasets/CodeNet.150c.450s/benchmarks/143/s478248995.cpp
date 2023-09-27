#include <iostream>
#include <unordered_map>

using namespace std;

typedef long long ll;

int main(int argc, char const* argv[])
{
	ll sum(0);
	unordered_map<int, int> mp;
	int N;
	cin >> N;
	int A[N];
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		sum += A[i];
		if (mp.find(A[i]) != mp.end())
			mp[A[i]] += 1;
		else
			mp[A[i]] = 1;
	}
	int Q;
	cin >> Q;
	int B, C;
	for (int i = 0; i < Q; i++)
	{
		cin >> B >> C;
		if (mp.find(B) != mp.end())
		{
			sum += (C - B) * mp[B];
			if (mp.find(C) != mp.end())
				mp[C] += mp[B];
			else
				mp[C] = mp[B];
			mp.erase(B);
		}
		cout << sum << endl;
	}
	return 0;
}