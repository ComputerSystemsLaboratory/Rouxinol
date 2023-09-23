#include<iostream>

using namespace std;

int main()
{
        int h[10];
	int i,j;
	int temp=0;
	
	for(i=0; i<10; i++)
	{
		cin>>h[i];
	}
	
	for(i=0; i<9; i++)
	{
	   for(j=i+1; j<10; j++)
	   {
	   	  if(h[j]>h[i])
	   	  {
	   	  	 temp=h[j];
	   	  	 h[j]=h[i];
	   	  	 h[i]=temp;	
	          }
	   } 
        }
    
        for(i=0; i<3; i++)
	{
		cout<<h[i]<<endl;
	}

	return 0;
}