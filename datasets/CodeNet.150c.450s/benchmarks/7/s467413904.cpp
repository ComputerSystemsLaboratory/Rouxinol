#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int mtain[10];

	for (int i = 0; i < 10; ++i)
	{
		cin >> mtain[i];
	}

	for (int i = 0; i < 10; ++i)
	{
		for (int j = i + 1; j < 10; ++j)
		{
			int work = 0;

			if(mtain[i] < mtain[j]){
				work = mtain[i];
				mtain[i] = mtain[j];
				mtain[j] = work;	
			} 
		}
	}

	cout << mtain[0] << endl;
	cout << mtain[1] << endl;
	cout << mtain[2] << endl;

	return 0;
}