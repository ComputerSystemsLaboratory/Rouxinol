#include <iostream>
using namespace std;

int AgreementCountAnswer(int n)
{
	int AgreementCount = 0;
	for(int a = 0; a < 10; a++){
		for(int b = 0; b < 10; b++){
			for(int c = 0; c < 10; c++){
				for(int d = 0; d < 10; d++){
					if(a + b + c + d == n) AgreementCount++;
				}
			}
		}
	}
	return AgreementCount;
}

int main()
{
	while(true){
		int n;
		cin >> n;
		if(cin.eof() == true) break;
		cout << AgreementCountAnswer(n) << endl;
	}
	return 0;
}