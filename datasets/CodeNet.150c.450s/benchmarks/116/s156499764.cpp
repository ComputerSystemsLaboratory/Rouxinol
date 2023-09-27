#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <bitset>
#include <fstream>
using namespace std;
typedef long long ll;

int main()
{
	int K,N;
	while(cin>>N>>K && (K || N)){
		ll res = 0, ans = 0;
		queue<int> A;
		for(int i = 0; i < N; i++){
			int buf;
			cin>>buf;
			res += buf;
			A.push(buf);
			if(i >= K){
				res -= A.front();
				A.pop();
				ans = max(ans, res);
			}
		}
		cout<<ans<<endl;
	}
}