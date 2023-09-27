#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define nrep(i,n) for(int i=1;i<=(n);i++)
using namespace std;

void fill(char *aa,int a,int L){
  rep(i,L){
    aa[i] = '0' + a%10;
    a=a/10;
  }
}

int main(){
  for(;;){
    int a,L;
    scanf("%d %d",&a,&L);
    if(!(a+L)) break;

    int count = 0;
    char aa[7];
    int tmp=a;

    int rec[21]={0};
    rec[0]=a;
    aa[L]='\0';
    int j,d;
    int end=0;

    for(;;){
      if(end)break;
      fill(aa,tmp,L);
      //printf("%d\n",tmp);
      sort(aa,aa+L,greater<char>()); 
      int l=atoi(aa);
      sort(aa,aa+L);
      int s=atoi(aa);
      //printf("l = %d, s = %d\n",l,s);
      tmp = l-s;
      count++;
      //printf("count = %d\n",count);
      rec[count] = tmp;
      rep(i,count+1){
	if(count!=i && rec[i]==tmp){
	  //printf("%d\n",rec[i]);
	  j=i;
	  d=count-i;
	  end=1;
	  break;
	}
      }
    }
    printf("%d %d %d\n",j,tmp,d);
  }
}