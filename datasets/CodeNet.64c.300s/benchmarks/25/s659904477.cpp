#include <iostream>
using namespace std;

bool isin(int n, int x[]){
	for (int i=0; i<4; i++)
		if (n==x[i]) return true;
	return false;
}

int main(void){
	
	while (true){
		int a[4],b[4];
		for (int i=0; i<4; i++)
			cin>>a[i];
		if (cin.eof()) break;
		for (int i=0; i<4; i++)
			cin>>b[i];

		int c1=0, c2=0;
		for (int i=0; i<4; i++)
			if (isin(a[i], b))
				if (a[i]==b[i]) c1++;
				else c2++;
		cout<<c1<<" "<<c2<<endl;
	}
	return 0;
}