#include <stdio.h>
char RB[46]=".,!? abc  def  ghi  jkl  mno  pqrs tuv  wxyz ";char fuego(int here, int len) {int mod;if (here==1) mod=5; else if (here==9 || here==7) mod=4; else mod=3;return RB[(here-1)*5+len%mod];}
int main() {int len=0,val=0,N;char T;scanf("%d%*c",&N);while (N) {T=getchar();if (T>='0' && T<='9') {if (val!=T-48) {if (val) printf("%c",fuego(val,len));val=T-48,len=0;} else len++;} else {val=0,len=0,N--;puts("");}} return 0;}