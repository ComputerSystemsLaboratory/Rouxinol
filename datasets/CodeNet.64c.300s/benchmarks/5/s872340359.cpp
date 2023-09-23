#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[10] , i = 0;
	
    while (i < 10){
		cin>>a[i];
		i++;
    }
	
    sort(a , a + 10);
	
	while (--i > 6){
		cout << a[i] << endl;
	}
	
	return 0;
}