#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long> R(N);

    for(int i = 0; i < N; i++){
	cin >> R.at(i);	
    }

    long base = R.at(0);
    long profit = -10000000000;
    for(int i = 1; i < N; i++){
	long r = R.at(i);
	profit = max(profit, r - base);
	base = min(base, r);
    }
    cout << profit << endl;
}

