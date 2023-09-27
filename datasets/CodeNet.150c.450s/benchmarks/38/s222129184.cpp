#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector <int> v_c;
	v_c.resize(3);
	double e =2.0;
	int N;
	//data set
	cin >> N;
	for(int i = 0; i < N; ++i)
	{
		cin >> v_c[0] >> v_c[1] >> v_c[2];
		sort(v_c.begin(),v_c.end(),greater<int>());
		if( pow(v_c[0],e) == (pow(v_c[1],e)+pow(v_c[2],e)))
		{
			cout << "YES"<<endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}