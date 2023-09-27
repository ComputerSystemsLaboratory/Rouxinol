#include<iostream>
using namespace std;

int main()
{
	int n;
	int b, f, r, v;
	int room[4][30]={0};
	int i, j;
	
	cin >> n;
	
	for(i=0;i<n;i++){
		cin >> b >> f >> r >> v;
		room[b-1][(f-1)*10+r-1]+=v;
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<30;j++){
			cout << ' ' << room[i][j];
			if(j==9||j==19)
				cout << endl;
		}
		cout << endl;
		if(i!=3)
			cout << "####################" << endl;
	}
	
	return 0;
	
}