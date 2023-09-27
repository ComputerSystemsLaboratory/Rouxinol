#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n;

	int count = 0;
	vector<int> result;
	while(cin >> n){

		for(int a = 0; a <= 9; a++)
			for(int b = 0; b <= 9; b++)
				for(int c = 0; c <= 9; c++)
					for(int d = 0; d <= 9; d++)
						if(a+b+c+d == n)
							count++;

		result.push_back(count);
		count = 0;
	}

	for(const int& x : result){
		cout << x << endl;
	}


	return 0;
}