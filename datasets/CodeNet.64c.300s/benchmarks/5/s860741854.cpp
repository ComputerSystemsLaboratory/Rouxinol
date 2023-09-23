#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int x[10];
	int i,j,tmp;
	for(i=0;i<10;i++){
		cin >> x[i];
	}
	
	sort(x,x+10);
	
	cout <<x[9] <<endl;
	cout <<x[8] <<endl;
	cout <<x[7] <<endl;
    
    
    
	
	return 0;
}