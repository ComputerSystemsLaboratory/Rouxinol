#include <iostream>

using namespace std;

int main()
{
	int n, n1, n2, n3;
	int i = 1;
	cin >> n;
	do{
		cin >> n1 >> n2 >> n3;
		
		if(n1 * n1 + n2 * n2 == n3 * n3){
			cout << "YES" << endl;
		}
		else if(n1 * n1 + n3 * n3 == n2 * n2){
			cout << "YES" << endl;
		}
		else if(n3 * n3 + n2 * n2 == n1 * n1){
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		i++;
	}while(i <= n);
	
	return 0;
}