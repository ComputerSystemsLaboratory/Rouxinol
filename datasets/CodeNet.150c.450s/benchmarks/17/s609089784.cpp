#include <iostream>
using namespace std;

int main()
{
	int n[5];
	int x=0;

	for(int i=0 ;i<5 ;i++){
		cin >> n[i];

	}
	for(int i=0 ;i<5 ;i++){
		for(int j=i+1 ;j<5 ;j++){
			if(n[i] < n[j]){
				x = n[i];
				n[i] = n[j];
				n[j] = x;
			}
		}
	}

	for(int i=0 ;i<5 ;i++){
		cout << n[i] ;
		if(i < 4)
			cout << ' ' ;
		else if(i == 4)
			cout << endl;
	}

	return 0;
}