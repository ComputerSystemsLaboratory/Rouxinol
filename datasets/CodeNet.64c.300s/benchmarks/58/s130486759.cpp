#include<stdio.h>
#define N 100
int W,H;
char a[N][N];

int DFS(int curX,int curY,char curChar)
{   
	if(curX<0 || curX>=W)  return 0;
	if(curY<0 || curY>=H)  return 0;
	if(a[curX][curY] != curChar)   return 0;
   
	a[curX][curY] = '0';
    DFS(curX,curY+1,curChar);
	DFS(curX,curY-1,curChar);
	DFS(curX-1,curY,curChar);
    DFS(curX+1,curY,curChar);
	return 0;	
}

int main()
{
	while(scanf("%d%d",&W,&H),W||H)    //判断?入先列数，后行数！！！！ 若?0 0 ?停止
	{
	   int i,j;  
	   int count=0;                   //?次?入列数行数后，count要置0 
       for( i=0;i<W;i++)
	   { 
		 getchar(); 
	     for(j=0;j<H;j++)
		 {
	        scanf("%c",&a[i][j]);
		 }
	   }
	   
	   for( i=0;i<W;i++)
	   {  
	     for(j=0;j<H;j++)
		 {
		    if(a[i][j]!='0')     {DFS(i,j,a[i][j]);  count++;}
		 }
	   }
	   
	   printf("%d\n",count);
	}

	return 0;
}