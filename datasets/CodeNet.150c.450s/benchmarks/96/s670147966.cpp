#include <cstdio>
int main(){
  int N,p,g,a[9]={};
  int i,o;
  char v,prev;
  scanf("%d",&N);
  for(i=1;i<=N+1;i++){
    p=0;
    while(1){
      p++;
      scanf("%c",&v);
      if(v=='\n') break;
      if(v=='1') a[0]++;
      if(v=='2') a[1]++;
      if(v=='3') a[2]++;
      if(v=='4') a[3]++;
      if(v=='5') a[4]++;
      if(v=='6') a[5]++;
      if(v=='7') a[6]++;
      if(v=='8') a[7]++;
      if(v=='9') a[8]++;
      if(v=='0') {
	if(prev=='1') {
	  if(a[0]%5==4) printf("?");
	  if(a[0]%5==1) printf(".");
	  if(a[0]%5==2) printf(",");
	  if(a[0]%5==3) printf("!");
	  if(a[0]%5==0) printf(" ");
	}
	if(prev=='2'){
	  g=a[1]%3;
	  if(g==0) g=3;
	  printf("%c",96+g);
	}
	if(prev=='3'){
	  g=a[2]%3;
	  if(g==0) g=3;
	  printf("%c",99+g);
	}
	if(prev=='4'){
	  g=a[3]%3;
	  if(g==0) g=3;
	  printf("%c",102+g);
	}
	if(prev=='5'){
	  g=a[4]%3;
	  if(g==0) g=3;
	  printf("%c",105+g);
	}
	if(prev=='6'){
	  g=a[5]%3;
	  if(g==0) g=3;
	  printf("%c",108+g);
	}
	if(prev=='7'){
	  g=a[6]%4;
	  if(g==0) g=4;
	  printf("%c",111+g);
	}
	if(prev=='8'){
	  g=a[7]%3;
	  if(g==0) g=3;
	  printf("%c",115+g);
	}
	if(prev=='9'){
	  g=a[8]%4;
	  if(g==0) g=4;
	  printf("%c",118+g);
	}
	for(o=0;o<=8;o++){
	  a[o]=0;
	}
      } 
      prev=v;
    }
    if(i>=2)   printf("\n");
  }
  return 0;
}