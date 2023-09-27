#include<iostream>

using namespace std;

int main(){
	int n, m, i, j;
	char chg[1000000], word[100000];
	while (true){
		cin >> n;
		if(n == 0) break;
		for(i = 0; i < n * 2; i ++){
			cin >> chg[i];
		}
		cin >> m;
		for(i = 0; i < m; i ++){
			cin >> word[i];
			for(j = 0; j < m; j ++){
				if(j % 2 == 0){
					if(word[i] == chg[j]){
						word[i] = chg[j + 1];
						break;
					}
				}
			}
		}

		for(i = 0; i < m; i ++){
			cout << word[i];
		}
		cout << endl;
	}
	return 0;
}