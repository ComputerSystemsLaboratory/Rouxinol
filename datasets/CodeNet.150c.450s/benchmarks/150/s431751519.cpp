#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
int A[10001] = {};
int *a, *b;

cin >> n;

  a = (int *)malloc(sizeof(int) * n+1);
  b = (int *)malloc(sizeof(int) * n+1);
  
for(int i = 0 ; i < n ; i++){
	cin >> a[i + 1];
	A[a[i + 1]]++;
}

for(int i = 1 ; i <= 10000 ; i++){
	A[i] += A[i - 1];
}

for(int i = 1 ; i <= n ; i++){
	b[A[a[i]]] = a[i];
	A[a[i]]--;
}

for(int i = 1 ; i <= n ; i++){
	if(i != n){
		cout << b[i] << " ";
	}else{
		cout << b[i] << endl;
	}
}

return 0;

}