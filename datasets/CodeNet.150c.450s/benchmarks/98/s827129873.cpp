#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
	int n, m;
	while(1){
		cin >> n >> m;
		if(n == 0 && m == 0) break;
		int i, j, temp = 0, k, count = 0;
		int t[n], h[m], sum1 = 0, sum2 = 0;
		int d[10000], e[10000];
		bool cando = false;
		for(i = 0;i < n;i++){
			cin >> t[i];
		}
		for(i = 0;i < m;i++){
			cin >> h[i];
		}
		
		sort(t, t+n);
		sort(h, h+m);
		
		for(i = 0;i < n;i++){
			sum1 += t[i];
		}
		for(i = 0;i < m;i++){
			sum2 += h[i];
		}
		for(i = 0;i < n;i++){
			for(j = 0;j < m;j++){
				if(sum1 - t[i] + h[j] == sum2 - h[j] + t[i]){
					cando = true;
					d[count] = t[i];
					e[count] = h[j];
					count++;
				}
			}
		}
		if(!cando){
			cout << "-1" << endl;
		}
		else if(cando){
			for(i = 0;i < count;i++){
				for(j = i+1;j < count;j++){
					if(d[i] + e[i] > d[j] + e[j]){
						temp = d[i];
						d[i] = d[i+1];
						d[i+1] = temp;

						temp = e[i];
						e[i] = e[i+1];
						e[i+1] = temp;
					}
				}
			}
			cout << d[0] << " " << e[0] << endl;
		}
	}
	return 0;
}