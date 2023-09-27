#include <bits/stdc++.h>
using namespace std;
int main(){
	int i=1;
	int x;
	while(cin >> x){
		if(x == 0) return 0;
		else cout << "Case " << i << ": " << x << endl;
		i++;
	}
}