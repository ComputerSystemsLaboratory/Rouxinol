#include <iostream>
using namespace std;

int main() {
	int m,f,r,k,i = 0;
	char a[1000];
	while(m != -1 || f != -1 || r != -1){
		cin >> m >> f >> r;
		if (m+f < 30 || m == -1 || f == -1)
			a[k] = 'F';
		else if (m+f < 50 && r <50 )
			a[k] = 'D';
		else if (m+f < 65)
			a[k] = 'C';
		else if (m+f < 80)
			a[k] = 'B';
		else
			a[k] = 'A';
		k++;
	}
	for(i=0;i<k-1;i++){
		cout << a[i] <<endl;
	}
	return 0;
}