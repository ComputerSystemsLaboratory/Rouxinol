#include <cstdio>
#include <cstdlib>
#include <iostream>


using namespace std;


int s[201];

int main(){


	int n,m;
	int i,j;


	while(1){

		loop:
		cin >> n >> m;

		if(n == 0 && m == 0){
			break;
		}

		int sum_T,sum_H;

		sum_T = sum_H = 0;

		for(i=0; i<n; i++){
			cin >> s[i];
			sum_T += s[i];
		}
		for(i=n; i<n+m; i++){
			cin >> s[i];
			sum_H += s[i];
		}

		for(i=0; i<n;i++){
			for(j=n; j<n+m; j++){
				if(sum_T - s[i] + s[j] == sum_H + s[i] - s[j]){
					cout << s[i] << " " << s[j] << endl;
					goto loop;
				}
			}
		}
		cout << -1 << endl;
	}
return 0;
}