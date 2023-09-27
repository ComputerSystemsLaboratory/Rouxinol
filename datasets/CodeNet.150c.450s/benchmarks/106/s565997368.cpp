#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a, b, c;
	int count;
	vector<int> v;
	cin >> a >> b>> c;

	for(int n = 1; n <= c; n++){
		if((c % n) == 0)
			v.push_back(n);
	}

	count = 0;
	for(int n = 0; n < v.size(); n++){
		if(a <= v[n] && v[n] <= b)
			count++;
	}
	cout << count << endl;
}