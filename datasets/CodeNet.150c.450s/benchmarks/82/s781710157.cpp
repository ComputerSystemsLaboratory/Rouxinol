#include<iostream>
using namespace std;
int num[10];

int op[10][10];

int main() {
//	freopen("in","r",stdin);
	for(int i=1;i<=6;i++)
		cin>>num[i];

	op[1][2] = 3;
	op[1][3] = 5;
	op[1][4] = 2;
	op[1][5] = 4;

	op[2][1] = 4;
	op[2][4] = 6;
	op[2][3] = 1;
	op[2][6] = 3;

	op[3][2] = 6;
	op[3][1] = 2;
	op[3][6] = 5;
	op[3][5] = 1;

	op[4][1] = 5;
	op[4][5] = 6;
	op[4][6] = 2;
	op[4][2] = 1;

	op[5][1] = 3;
	op[5][3] = 6;
	op[5][4] = 1;
	op[5][6] = 4;

	op[6][2] = 4;
	op[6][3] = 2;
	op[6][4] = 5;
	op[6][5] = 3;

	int n; cin>>n;
	while(n--) {
		int a, b; cin>>a>>b;
		for(int i=1;i<=6;i++) 
			if(a==num[i]) {
				a = i; break;
			}

		for(int i=1;i<=6;i++) 
			if(b==num[i]) {
				b = i; break;
			}

		cout<<num[op[a][b]]<<endl;
	}

	return 0;
}
