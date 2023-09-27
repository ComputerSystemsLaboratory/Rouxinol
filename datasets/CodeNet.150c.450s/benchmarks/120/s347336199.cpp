#include <iostream>
#include <cstdio> 
#include <algorithm>
#include <cstdlib> 
#include <cstring>
#include <bitset>
using namespace std;

//?意：
//有一个??器可以?r行c列的煎?，煎?可以正面朝上（用1表示）也可以背面朝上（用0表示）。
//一次可将同一行或同一列的煎?全部翻?。?在需要把尽可能多的煎?翻成正面朝上，?最多能使多少煎?正面朝上？?
//?入：
//多??入，??第一行?二整数r, c (1 ? r ? 10, 1 ? c ? 10 000)，剩下r行c列表示煎?初始状?。r=c=0表示?入?束。?
//?出：
//?于???入，?出最多能使多少煎?正面朝上。 


//思路：
//??上下翻的?首先想到bitset（flip功能），把?个煎?当成二?制数中的一位 
//由于翻?同?的行和列?，翻??序?煎?的最?朝向没有影?，所以可以先判断所有的横行是否翻?，然后求出??横行翻法??的煎?朝上数的最大?。
//?了得到最大?，希望?个?行在翻?后朝上的煎?数都?加，否?不翻?。
//最后?比??横行翻法的最大?，从中取最大?就是答案 

bitset<10000> cookie[10];
int r,c,i,j,ans,result,up;

int max(int a,int b)
{
	return a>b?a:b;
}

void dfs(int k)
{
	if(k==r){
		result=0;
		for(i=0;i<c;i++){
			up=0;
			for(j=0;j<r;j++){
				if(cookie[j][i])  up++;
			}
			result+=max(up,r-up);
		}
		ans=max(ans,result);
		return;
	}
	dfs(k+1);
	cookie[k].flip();
	dfs(k+1);
 } 

int main()
{
	while(scanf("%d %d",&r,&c) && r && c){
		getchar();
		ans=0; 
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				bool a; 
				cin>>a;
				getchar();
				cookie[i][j]=a;
			}
		}
		ans=0;
		dfs(1);
		printf("%d\n",ans);
	}
	return 0;
}