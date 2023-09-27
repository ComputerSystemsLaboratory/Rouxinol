#include <iostream>
using namespace std;

int GetCombinationCount(int n)
{
	int Count = 0;
	for(int a = 0; a < 10; a++){
		for(int b = 0; b < 10; b++){
			for(int c = 0; c < 10; c++){
				for(int d = 0; d < 10; d++){
					if(a + b + c + d == n) Count++;
				}
			}
		}
	}
	return Count;
}

int main()
{
	while(true){
		int n;
		cin >> n;
		if(cin.eof() == true) break;
		cout << GetCombinationCount(n) << endl;
	}
	return 0;
}