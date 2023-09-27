#include <iostream>
using namespace std;

int n,m;
char cha[2][100];
char str[100000000];

void solve()
{
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(str[i] == cha[0][j]){
				str[i] = cha[1][j];
				break;
			}
		}
		cout << str[i];
	}
	cout << endl;
}

int main()
{
	cin >> n;
	while(n){
		for(int i=0;i<n;i++){
			cin >> cha[0][i] >> cha[1][i];
		}
		cin >> m;
		for(int i=0;i<m;i++){
			cin >> str[i];
		}
		solve();
		cin >> n;
	}
	return 0;
}