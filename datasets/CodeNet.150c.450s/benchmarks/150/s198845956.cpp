#include <bits/stdc++.h>
using namespace std;
#define r(i,n) for(auto i=0;i<n;i++)
#define s(c) static_cast<int>((c).size())

int main(){
	int n;
	scanf("%d", &n);
	int min = 10000, max = 0, t, A[10001]{};
	r(i, n){
		scanf("%d", &t);
		if(t < min) min = t;
		if(t > max) max = t;
		A[t]++;
	}
	A[min]--;
	cout << min;
	for(int i = min; i <= max; i++){
		r(j, A[i]){
			cout << ' ' << i;
		}
	}
	cout << endl;
	return 0;
}
