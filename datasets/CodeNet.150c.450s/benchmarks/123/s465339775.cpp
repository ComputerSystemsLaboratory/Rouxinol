#include<stdio.h>
#include<math.h>

bool isprime(int x){
  if (x == 2)return true;
   else if (x ==3) return true;
  else if (x < 2 ) return false;
  else if (x % 2==0 ) return false;
  else if(x>3){ 
 for(int i=3;i*i<=x;i=i+1){

	 if (x %i==0){return false;break;}
	 }
	 return true;}
}

int main(){
int N,x,cou;
bool f;//
//scanf("%d",&x);
//N=sqrt((double)x);
//printf("%d",N);

f=false;cou=0;
scanf("%d",&N);
for(int i=0;i<N;i++)
{scanf("%d",&x);
f=isprime(x);
if(f==true)cou++;
}
printf("%d\n",cou);

return 0;
}