#include<string>
#include<iostream>

using namespace std;

int main()
{
	int i=0,j,a;
	while(1){
		i++;
		cin >> a;
		if(a != 0) cout << "Case " <<i << ": "<< a <<endl;
		else break;
	}
	return 0;
}