#include <iostream>
using namespace std;

void swap(int *x, int *y){
	int z = *x;
	*x = *y;
	*y = z;
}

int gcd(int x, int y){
	int r;

	if(x < y)
		swap(&x, &y);

	while(y > 0){
		r = x % y;
		x = y;
		y = r;
	}

	return x;
}

int main(){
	int x, y, ans;

	cin>>x>>y;

	ans = gcd(x, y);

	cout<<ans<<endl;

	return 0;
}