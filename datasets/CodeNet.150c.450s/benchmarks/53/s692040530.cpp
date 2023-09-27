#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<set>
#include<vector>
#include<stack>
#include<list>

typedef long long ll;

using namespace std;

bool isPrime(int n){
	if(n == 2)
		return true;
	if(n<2 || n%2==0)
		return false;
	for(int i = 3 ; i*i<=n ; i+=2){
		if(n%i == 0)
			return false;
	}
	return true;
}

int main(){
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	printf("%d:",n);
	if(isPrime(n)){
		printf(" %d\n",n);
		return 0;
	}
	int a[100010];
	int t = 0;
	while (n%2==0){
		a[t++] = 2;
		n >>= 1;
		if(n&1)
			break;
	}
	
	for(int i = 3 ; i<=n ; i++){
		if(isPrime(i) == false)
			continue;
		while (n%i==0){
			a[t++] = i;
			n /= i; 
		}
		if(n == 1)
			break;
	}
	
	for(int i = 0 ; i<t ; i++){
			printf(" %d",a[i]);
	}
	printf("\n");
	return 0;
}