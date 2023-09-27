#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
	int n, p;
	while(1){
		cin >> n >> p;
		if(n == 0 && p == 0) break;
		int i, count = 0;
		int a[n], P;
		for(i = 0;i < n;i++){
			a[i] = 0;
		}
		P = p;
		while(1){
			if(count == n){
				count = 0;
			}
			//cout << "count = " << count << endl;
			if(P > 0){
				a[count]++;
				P--;
				if(a[count] == p){
					break;
				}
				count++;
			}
			else if(P == 0 && a[count-1] != p){
				P = a[count];
				a[count] = 0;
				count++;
			}

			//printf("a[%d] = %d, count = %d, P = %d\n",count-1,a[count-1],count,P);
		}
		/*if(count == 0){
			count = n-1;
		}
		else if(count != 0){
			count = count - 1;
		}*/
		cout << count << endl;
	}
	return 0;
}