#include<iostream>
using namespace std;
int jud (int x,int n,int s)
{
	if(n==0&&s==0){
		return 1;
	}else if(n<0&&s<0)return 0;
	
	if(x==10){
		if(n==0&&s==0)return 1;
		else return 0;
	}
	
	
	
	
	int ans=0;
	
	ans+=jud(x+1,n-1,s-x);
	ans+=jud(x+1,n,s);
	return ans;
}



int main ()
{
	int n,s;
	
	while(1)
	{
		cin>>n>>s;
		if(n==0&&s==0)break;
		cout<<jud(0,n,s)<<endl;;
		
		
	}
	
	
	
	return 0;
}