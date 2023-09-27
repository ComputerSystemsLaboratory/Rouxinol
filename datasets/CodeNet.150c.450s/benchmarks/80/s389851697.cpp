#include <iostream>
using namespace std;

int main()
{
	int s,t,sp=0,tp=0;
	for(int i=0;i<4;i++){
		cin >> s;
		sp += s;
	}
	for(int i=0;i<4;i++){
		cin >> t;
		tp += t;
	}
	cout << max(sp,tp) << endl;
	return 0;
}