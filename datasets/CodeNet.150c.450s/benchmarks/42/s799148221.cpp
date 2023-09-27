#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int n, q, i, t = 0;
	cin >> n >> q;

	vector<string> vs(n);
	vector<int> vq(n);
	queue<int> vi;
	
	for(i = 0; i < n; ++i){
		cin >> vs[i] >> vq[i];
		vi.push(i);
	}

	while( !vi.empty() )
	{
		i = vi.front();
		vi.pop();
		if( vq[i] <= q ){
			t += vq[i];
			cout << vs[i] << " " <<  t << "\n";
		} else {
			t += q;
			vq[i] -= q;
			vi.push(i);
		}
	}

	return 0;
}