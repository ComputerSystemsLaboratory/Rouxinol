#include <iostream>
using namespace std;

string list[32];
int res=0;
int sa[1000];

int main(){
	int n,max,k,min;
	int r[200000];
	cin >> n;
	for(int i=0;i<n;i++) cin >> r[i];
	max=r[1]-r[0];
	min=r[0];
		for(int j=1;j<n;j++){
			k=r[j]-min;
			if(min>r[j]) min=r[j];
			if(max<k) max=k;
		}
	cout << max << endl;
	return 0;
}