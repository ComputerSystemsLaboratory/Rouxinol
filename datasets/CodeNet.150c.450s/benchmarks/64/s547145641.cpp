#include<iostream>
using namespace std;
int n,a[100];

int slove(int i,int m);
int main()
{
	int i,qn,q;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	cin >> qn;
	for(i=0;i<qn;i++){
		cin >>q;
		if ( slove(0,q)){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}	
}

int slove(int i,int m)
{
	int res;
	if (m==0) return 1;
	if (i>=n) return 0;
	res =slove(i+1,m) || slove(i+1,m-a[i]);
	return res;
}