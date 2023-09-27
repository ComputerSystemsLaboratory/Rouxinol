#include<iostream>
using namespace std;

#include <stdio.h>


int main(){
  int n, m, i, j;
  char c[128], ch[128], a;

  while(1){
    //scanf("%d",&n);
    cin >> n;
    if(n == 0) break;
    for(i = 0 ; i < n ; i++){
      //scanf(" %c %c ",&c[i],&ch[i]);
      cin >> c[i] >> ch[i];
    }
    //scanf("%d",&m);
    cin >> m;
    for(i = 0 ; i < m ; i++){
      //scanf(" %c ",&a);
      cin >> a;
      for(j = 0 ; j < n ; j++){
	if(a == c[j]){
	  a = ch[j];
	  break;
	}
      }
      printf("%c",a);
    }
    printf("\n");
  }

  return 0;

}