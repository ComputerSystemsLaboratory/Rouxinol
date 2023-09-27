#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pb push_back
set<int > se;


int main(){
	int n;
	cin >> n;

	vector<int > v(10050,0);

	for (int i = 1; i < 105; ++i)
	{
		for (int j = 1; j < 105; ++j)
		{
			for (int k = 1; k < 105; ++k)
			{
				int v1 = i*i + j*j + k*k + i*j + j*k+k*i;
				if(v1<10050)
					v[v1]=v[v1]+1;
			}
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		cout << v[i] << endl;
	}


}