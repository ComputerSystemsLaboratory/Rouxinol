#include <iostream>
using namespace std;

int N;
const int MAX_N = 10000;
int a[MAX_N];
int b[MAX_N];

int main()
{
	cin >> N;
	while(N){
		int geta=0,getb=0;
		for(int i=0;i<N;i++){
			cin >> a[i] >> b[i];
			if(a[i] > b[i])
				geta += a[i] + b[i];
			else if(a[i] < b[i])
				getb += a[i] + b[i];
			else{
				geta += a[i];
				getb += b[i];
			}
		}
		cout << geta << " " << getb << endl;
		cin >> N;
	}
	return 0;
}