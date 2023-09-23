#include <iostream>

#define reep(i,n,m) for(int i=(n);i<(m);i++)
#define rep(i,n) reep(i,0,n)

using namespace std;

int a[10];
int r[10];
int r_i;
int l[10];
int l_i;

bool is_greater(int array[],int n){
	reep(i,1,n){
		if(array[i]<array[i-1]){
			return false;
		}
	}
	return true;
}

bool dfs(int n){
	if(n==10){
		if(is_greater(r,r_i)&&is_greater(l,l_i)){
			return true;
		}else{
			return false;
		}
	}

	r[r_i++] = a[n];
	if(dfs(n+1)){
		return true;
	}
	r_i--;

	l[l_i++] = a[n];
	if(dfs(n+1)){
		return true;
	}
	l_i--;
	return false;
}

int main(){
	int N;
	cin >> N;
	while(N--){
		rep(i,10){
			cin >> a[i];
		}
		r_i = l_i = 0;
		if(dfs(0)){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}