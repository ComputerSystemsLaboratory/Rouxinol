#include<iostream>
using namespace std;
int main()
{
	int r,c,a[100][100],sum=0,haji=0;
	cin >> r >> c;
	for(int i=0;i<r;++i){
		for(int j=0;j<c;++j){
			cin >> a[i][j];
		}
	}
	for(int	i=0;i<r;++i){
		sum=0;
		for(int j=0;j<c;++j){
			cout << a[i][j] << " ";
			sum += a[i][j];
		}
		cout << sum << endl;
	}
	for(int j=0;j<c;++j){
		sum=0;
		for(int i=0;i<r;++i){
			sum += a[i][j];
		}
		cout << sum << " ";
		haji += sum;
	}
	cout << haji << endl;
	return 0;
}