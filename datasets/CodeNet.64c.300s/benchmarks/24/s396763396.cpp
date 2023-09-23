#include<iostream>
#include<stdio.h>

using namespace std;

int main(void){
  int n;
  int a, b;
  int suma = 0, sumb = 0;
  while(1){
    suma = 0;
    sumb = 0;
    scanf("%d", &n);
    if(n == 0) break;
    for(int i = 0; i<n; i++){
      cin >>a >> b;
      if(a > b){
	suma += a + b;
      } else if(a < b){
	sumb += a + b;
      } else {
	suma += a;
	sumb += b;
      }
    }
    printf("%d %d\n",suma,sumb);
  }
    return 0;
}
  