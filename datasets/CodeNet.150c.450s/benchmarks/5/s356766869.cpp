#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int n; vector<int> a;

int main(void){
	int input;

	scanf("%d", &n);
	for( int i = 0 ; i < n ; i++ ){
		scanf("%d", &input);
		a.push_back(input);
	}

	reverse(a.begin(), a.end());

	for( int i = 0 ; i < n ; i++){
		printf("%d", a[i]);
		if( i == n - 1) printf("\n");
		else printf(" ");
	}

	return 0;
}