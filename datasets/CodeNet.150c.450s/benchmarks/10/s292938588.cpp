#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	vector<int> room(4*3*10);

	int b, f, r, v;
	while(n-- && cin >> b >> f >> r >> v)
		room[30*--b + 10*--f + --r] += v;
	
	n = 1;
	for(const auto x : room) {
		cout << ' ' << x;
		if(n%10 == 0) cout << '\n';
		if(n%30 == 0 && n != 120) cout << "####################\n";
		++n;
	}

	return 0;
}

