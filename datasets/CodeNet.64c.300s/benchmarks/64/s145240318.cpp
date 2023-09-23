#include<stdio.h>
int gcd(int x,int y){
	return y?gcd(y,x%y):x;
} 
int main()
{
    int k,k1;
    scanf("%d%d",&k,&k1);
    printf("%d\n",gcd(k,k1));
}

