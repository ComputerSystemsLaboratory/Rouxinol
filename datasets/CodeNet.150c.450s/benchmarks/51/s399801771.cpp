#include <iostream>
using namespace std;

int main()
{
	int m[30];
	int number;
	for(int i=0;i<30 ;i++){
		m[i]=0;
	}

	for(int i=0 ;i<28 ;i++){
		cin >> number;
		for(int j=0 ;j<30 ;j++){
			if(number-1 == j)
				m[number-1]++;
		}
		
	}
	for(int i=0 ;i<30 ;i++){
		if(m[i] == 0)
			cout << i+1 << endl;
	}

	return 0;
}