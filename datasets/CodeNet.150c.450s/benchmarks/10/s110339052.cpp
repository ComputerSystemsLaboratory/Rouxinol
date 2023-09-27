#include<iostream>
using namespace std;
int main(void)
{
	int n,b,f,r,v,A[4][3][10],i;

	cin >> n;

	for(b=0;b<4;b++){
		for(f=0;f<3;f++){
			for(r=0;r<10;r++){
				A[b][f][r]=0;
			}
		}
	}

	for(i=1;i<=n;i++){
		cin >> b >> f >> r >> v;
		A[b-=1][f-=1][r-=1]+=v;
	}

	for(b=0;b<4;b++){
		for(f=0;f<3;f++){
			for(r=0;r<10;r++){
				cout << " " << A[b][f][r];
			}
			cout << endl;
		}
		if(b==3)break;
		cout << "####################" << endl;
	}
	return 0;
}