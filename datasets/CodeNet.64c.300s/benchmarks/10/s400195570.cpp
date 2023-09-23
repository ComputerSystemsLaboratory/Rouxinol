#include<iostream>
using namespace std;

int main()
{
	int x,y,i=0;	
	do{
		cin>>x>>y;
		i++;
		if (x==0&&y==0)
			break;
		else{
			if(x<=y)
				cout<<x<<" "<<y<<endl;
			else
				cout<<y<<" "<<x<<endl;
		}		
	} while(i<=3000);
	return 0;
}
