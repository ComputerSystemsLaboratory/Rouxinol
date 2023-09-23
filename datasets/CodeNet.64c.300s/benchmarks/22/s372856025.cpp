#include<iostream>
#include<cstdio>

using namespace std;

void bigger(int *x, int *y);

int main(void){
	int data;
	int n1, n2, n3;
	cin >> data;
	for(int i = 0; i < data; i++){
		scanf("%d %d %d", &n1, &n2, &n3);
		bigger(&n1, &n2);
		bigger(&n1, &n3);
		
		if(n1* n1 == n2*n2 + n3*n3)
		cout << "YES" << endl;
		else
		cout << "NO" << endl;
		
	}
	return 0;
}

void bigger(int *x, int *y){
	if(*y > *x){
		int type = *x;
		*x = *y;
		*y = type;
	}
}
	