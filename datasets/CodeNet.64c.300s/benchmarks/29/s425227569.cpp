#include <iostream>
using namespace std;

int main() {
	int e,x = 0,y = 0,z = 0,ans,n,i,j;
	while(1){
		ans = 10000000;
		cin >> e;
		if(e == 0)break;
		i = 1;
		while(1){
		if(i*i*i > e)break;
		i++;
		}
		i--;
		for(;i >= 0;i--){
			n = e;
			n -= i*i*i;
			z = i;
			if(n == 0){
				ans = min(ans,z);
				continue;
			}
		for(j = 0;j*j <= n;j++);
		j--;
		n -= j*j;
		y = j;
		if(n == 0){
			ans = min(ans, z+y);
			continue;
		}
		x = n;
		ans = min(ans,x+y+z);
		//cout << x << " " << y  << " " << z <<endl;
		}
		j = 1;
		while(1){
		if(j*j > e)break;
		j++;
		}
		j--;
		for(;j >= 0;j--){
			n = e;
			n -= j*j;
			if(n == 0){
				ans = min(ans,j);
			}
			else{
				ans = min(ans,j+n);
			}
		//cout << n << " " << j <<endl;
		}
	cout << ans << endl;
	}
	return 0;
}