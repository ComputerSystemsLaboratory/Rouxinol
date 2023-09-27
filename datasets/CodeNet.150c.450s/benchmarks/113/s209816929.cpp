#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a;
	vector<int> vec;

	while (1)
	{
		cin >> a;
		if (a != 0){
			vec.push_back(a);
		}
		else{
			break;
		}
	}

	for (unsigned int i = 0; i < vec.size(); ++i)
	{
		cout << "Case " << i + 1 << ": " << vec[i] << endl;
	}

	return 0;
}