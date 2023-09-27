#include<cstdio>
#include<string>
#include<iostream>

using namespace std;

int main(){
	char temp;
	int n;
	int m;
	
	while(1){
		cin >> n;
		if(n == 0)break;
		char data[n][2];
		string ans;

		for(int i=0;i<n;++i){
			cin >> data[i][0];
			cin >> data[i][1];
		}
		cin >> m;
		for(int i=0;i<m;++i){
			cin >> temp;
			for(int j=0;j<n;++j){
				if(temp == data[j][0]){
					temp = data[j][1];
					break;
				}
			}
			ans += temp;
		}
		cout << ans << endl;
	}
	return 0;
}