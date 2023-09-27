#include<iostream>
#include<vector>
using namespace std;
int main(){
	int r,c, sum, sum_all=0;
	cin>>r>>c;
	vector<vector<int> > x(r, vector<int>(c));
	int i, j;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		cin>>x[i][j];	
		}
	}
	
	for(i=0;i<r;i++){
		sum=0;
		for(j=0;j<c;j++){
			sum += x[i][j];
			cout << x[i][j] << ' ';
		}
		cout << sum << endl;
	}
	for(j=0;j<c;j++){
		sum=0;
		for(i=0;i<r;i++){
			sum += x[i][j];
		}
		cout << sum;
		sum_all += sum;
		cout << ' ';
	}
	
	cout << sum_all << endl;
	return 0;
}