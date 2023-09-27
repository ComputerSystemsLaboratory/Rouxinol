#include <iostream>
using namespace std;

int main(){
	int r,c,rr,cc,n;
	cin >> r >> c;
	rr=r+1;
	cc=c+1;
	int a[rr+1][cc+1];
	for(int i=1;i<=rr;i++){
		for(int j=1;j<=cc;j++){
			a[i][j]=0;
		}
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin >> n;
			a[i][j]=n;
			a[i][cc]+=n;
		}
	}
	for(int i=1;i<=rr;i++){
		for(int j=0;j<=cc;j++){
			a[rr][j]+=a[i][j];
		}
	}
	for(int i=0;i<=cc;i++){
		a[rr][i]=a[rr][i]/2;
	}
	for(int i=1;i<=rr;i++){
		for(int j=1;j<=cc;j++){
			cout <<a[i][j];
			if(j==cc){
				cout << endl;
			}else{
				cout << " ";
			}
		}
	}
	return 0;
}