#include <iostream>
#include <stdio.h>
#include <stack>
using namespace std;

int main(){
	int amida[30][2];
	int n, m;// ??°??¨?????\????????°
	cin >> n >> m;
	for (int i = 0; i < m; i++)scanf("%d,%d",&amida[i][0],&amida[i][1]);

	for (int i = 0; i < n; i++) {
		int Now=i+1;
		for (int j = m - 1; j >= 0; j--) {
			if (amida[j][0] == Now) {
				Now = amida[j][1];
			}
			else if (amida[j][1] == Now) {
				Now = amida[j][0];
			}
		}
		printf("%d\n",Now);
	}
	return 0;
}