#include <iostream>
using namespace std;

int main()
{
	int x, i;
	i = 1;
	while(true){
		cin >> x;
		if(x == 0) break;
		else{cout << "Case" << " " << i << ": " << x << endl;
			i++;}
	}
}