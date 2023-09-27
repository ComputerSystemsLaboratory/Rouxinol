 #include <iostream>
 #include <vector>
 
 using namespace std;
 
 int main()
{
	int n;
	cin >> n;
	vector<int> S(n);
	for (auto &s:S) cin >> s;
	int q;
	cin >> q;
	vector<int> T(q);
	for (auto &t:T) cin >> t;
	int C = 0;
	for (auto t:T)
	{
		for (auto s:S)
		{
			if (s==t)
			{
				C++;
				break;
			}
		}
	}
	
	cout << C << endl;
	
	
}