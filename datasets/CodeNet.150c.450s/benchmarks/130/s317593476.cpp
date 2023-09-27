#include <stdio.h>

//-------------------------------------------------------------
void get_a(int a[], int n, int m);   
void get_b(int b[], int m);
void keisan(int a[], int b[], int n, int m);
//--------------------------------------------------------------
int main(void)
{
	int n, m; //n=???, m=???
	scanf("%d %d", &n, &m);
	
	int a[n * m];  
	int b[m];
	
	get_a(a, n, m);
	get_b(b, m);
	keisan(a, b, n, m);
	
	return 0;
}
//-------------------------------------------------------
void get_a(int a[], int n, int m)
{
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[(i * m) + j]);
		}
	}
}
//------------------------------------------------------
void get_b(int b[], int m)
{
	for(int i = 0; i < m; i++){
		scanf("%d", &b[i]);
	}
}
//------------------------------------------------------
void keisan(int a[], int b[], int n, int m)
{
	int sum = 0;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			sum += ( a[(i*m) + j] * b[j] );
		}
		printf("%d\n", sum);
		sum = 0;
	}
}