#include <cstdio>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{ 
	int w, n;
	cin >> w;
	cin >> n;

	vector<int> s(w + 1);
	for (int i = 1; i <= w; ++i)
		s[i] = i;

	while (n--)
	{
		int a, b;
		scanf("%d,%d", &a, &b);

		swap(s[a], s[b]);
	}

	for (int i = 1; i <= w; ++i)
		cout << s[i] << endl;

	return 0;
}