#include<iostream>
using namespace std;
#define Max 100005
typedef long long llong;
int n,k;
llong T[Max];

//K辆最大运载量为P的卡车能装多少件货物 
int check(llong P)
{
	int i=0;
	for(int j=0;j<k;j++)
	{
		llong s=0;
		while(s+T[i]<=P)
		{
			s +=T[i];
			i++;
			if(i==n) return n;
		}
	}
	return i;
	
}

int solve(llong max){
	 llong left =max-1,right = 10000*n;
	 llong mid;
	 while(right - left>1) //注意这里不是left>right,因为那样会陷入死循环 
	 {
	 	mid =(left+right)/2;
		 int v =check(mid);  
		 if(v>=n) 
		 right =mid;
		 else 
		 left = mid; 
	 }
	 return right;//这里返回的rigth即为极限值 
	
}                                            

int main()
{
	cin>>n>>k;
	cin>>T[0];
	llong max = T[0];
	for(int i =1;i<n;i++)
	{
		cin>>T[i];
		if(max<T[i])
		max =T[i];
	}
	llong ans = solve(max);
	cout<<ans <<endl;
	return 0;
 } 




                                                            
