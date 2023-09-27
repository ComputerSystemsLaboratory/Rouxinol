#include<iostream>

using namespace std;

#define MAX 256

int miku(int x){
	if(x > 36)return 0;
	if(x < 10)return (x + 3)*(x + 2)*(x + 1) / 6;
	if(x > 18)return miku(36 - x);
	if(x > 9 && x < 19)return (x + 3)*(x + 2)*(x + 1) / 6 - (miku(x - 10) * 4);
}

int main(void){
	int n,i = 0;
	int ans[MAX];
	
	while(cin >> n){
		ans[i] = miku(n);
		i++;
	}
	
	for(int j = 0;j < i;j++){
		cout << ans [j] <<endl;
	}

	return 0;
}