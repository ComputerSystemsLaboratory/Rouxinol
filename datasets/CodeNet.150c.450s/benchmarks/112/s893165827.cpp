#include <iostream>
using namespace std;
int main(){
	while (1) {
		int n;
		cin>>n;
		if(n == 0)break;
		char list[n][2];
		for (int i = 0; i < n; i++) {
			cin>>list[i][0]>>list[i][1];
		}
		int m;
		cin>>m;
		char str[m];
		for (int i = 0; i < m; i++) {
			cin>>str[i];
			for (int j = 0; j < n; j++) {
				if(str[i] == list[j][0]){
					str[i] = list[j][1];
					break;
				}
			}
		}
		for (int c = 0; c < m; c++) {
			cout<<str[c];
		}
		cout<<endl;
	}
	return 0;
}