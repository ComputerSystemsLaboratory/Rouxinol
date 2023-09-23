#include<iostream>
using namespace std;
int calccounts(int n1,int n2,int tot,int num)
{
	int count=0;
	if (num==1){
		if (tot>=n1 && tot<=n2)
		   return 1;
		else
		   return 0;
	}
	else{
		if (tot<num*n1+num*(num-1)/2 || tot>num*n2-num*(num-1)/2 || n2-n1+1<num)
			return 0;
		else{
			for(int i=n1+1;i<=n2;i++)
			    count+=calccounts(i,n2,tot-i+1,num-1);
			return count;
		}
		
	}
}

int main()
{
	int n,x;
	do{
		cin>>n>>x;
		if (n==0 && x==0)
			break;
		cout<<calccounts(1,n,x,3)<<endl;
	} while(1);
	
	return 0;
}
