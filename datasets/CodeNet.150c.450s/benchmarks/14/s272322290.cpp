#include<iostream>
using namespace std;
int main()
{
	int n,x=1,a=0;
	int i = 1;
	cin >> n;
	
	do{
		int x = i;
		if (x % 3 == 0){
			cout << " " << i;
			a = 1;
		}
		if (a==0){
			do{
				if (x % 10 == 3){
					cout << " " << i;
					break;
				}	
				x /= 10;
				
			} while (x);
		}
		else{
			a = 0;
		}
	} while (++i<=n);
	cout << endl;
	return 0;
}