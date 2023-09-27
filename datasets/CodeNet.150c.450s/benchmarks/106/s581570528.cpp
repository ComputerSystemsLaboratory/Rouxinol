#include<iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;
	int yakusu = 0;
	
	cin >> a >> b >> c;
	
	for( ; a <= b; a++){
		if((c % a) == 0)
			yakusu++;
	}
	
	cout << yakusu << endl;
	
	
	return 0;
}