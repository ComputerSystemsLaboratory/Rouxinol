#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int h[10];
	for(int i=0 ; i<10 ; i++){
		cin >> h[i];
	}
	sort(h,h+10);
	cout << h[9] <<endl<<h[8]<<endl<<h[7]<<endl;
	return 0;
}