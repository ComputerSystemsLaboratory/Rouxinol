//0019
#include <bits/stdc++.h>
using namespace std;

int main(){
	double n,ans = 1;
	for(cin>>n;n != 0;n--){
	ans *= n;
}
	printf("%.f\n",ans );
	return 0;
}