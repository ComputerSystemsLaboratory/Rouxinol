#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	while(1){
		long long int num,ans=10000000;
		cin >> num;
		if(!num)	break;
		for(long long int y=0;y*y<=num;y++){
			for(long long int z=0;z*z*z+y*y<=num;z++){
				long long int x = num-z*z*z-y*y;
				ans = min(ans,(x+y+z));
			}
		}
		cout << ans << endl;
	}
}
