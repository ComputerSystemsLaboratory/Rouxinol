#include<cstdio>

int taxCalc(int x,int r){//x:?¨??????? r:?¨????
  return (double)(x*(100+r))/100.0;
}

int main(){
  int x,y,s;

  scanf("%d %d %d",&x,&y,&s);
  while(x+y+s > 0){
    int max = 0;

    for(int i=1;i<s;i++){
      for(int j=1;j<s;j++){
	if(taxCalc(i,x)+taxCalc(j,x) == s ){
	  int p = taxCalc(i,y)+taxCalc(j,y);
	  if(p > max)
	    max = p;
	}
      }
    }
    printf("%d\n",max);
    
    scanf("%d %d %d",&x,&y,&s);
  }
}