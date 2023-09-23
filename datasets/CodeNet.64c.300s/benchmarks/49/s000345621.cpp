#include <bits/stdc++.h>
#include <stdlib.h>
#define INF 114514810
#define FOR(i, r, n) for(int i=(r); i<(n); i++) 
#define REP(i, n) FOR(i, (0), n)
template<typename T>
void remove(std::vector<T>& vector, unsigned int index)
{
	vector.erase(vector.begin() + index);
}

using namespace std;

int n=0, a, b;

int main(){
	while (cin >> a >> b){
		a += b;
		while (a > 0)
		{
			n++;
			a /= 10;
		}
		cout << n << endl;
		n = 0;
	}
}