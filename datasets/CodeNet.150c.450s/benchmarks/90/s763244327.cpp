#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int num[101] = {0};
	int data, max = -1;
	vector<int> mode;

	while (cin >> data)
	{
		if(cin.eof())	break;

		num[data]++;
	}

	for (int i=1; i<101; i++)
	{
		if(num[i] > max){
			max = num[i];
			mode.clear();
			mode.push_back(i);
		}
		else if(num[i] == max){
			mode.push_back(i);
		}
	}

	vector<int>::iterator numit = mode.begin();
	for (;numit != mode.end(); numit++)
	{
		cout << *numit << endl;
	}

	return 0;
}