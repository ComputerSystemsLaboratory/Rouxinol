#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
	 
   for(int i=1;i<n;i++)
   {
       
   	int v=a[i];
   	int j=i-1;
   	while(j>=0&&a[j]>v)
   	{
   		a[j+1]=a[j];
   		j--;
	   }
	   a[j+1]=v;
	   for(int q=0;q<n;q++)
	   if(q!=n-1)
	   cout<<a[q]<<" ";
	   else
	   cout<<a[q];
	   cout<<endl;
   }
   
   return ;
}
int main()
{
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	if(i!=n-1)
	cout<<a[i]<<" ";
	else
	cout<<a[i];
	cout<<endl;
	insertionsort(a,n);
	return 0;
 } 
