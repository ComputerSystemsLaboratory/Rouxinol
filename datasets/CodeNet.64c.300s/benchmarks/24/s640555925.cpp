#include <iostream>

using namespace std;

int main()
{
	int n;
	int a,b;
	int sa=0,sb=0;//score
	
	
	while(cin>>n&&n!=0){
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		if(a<b){sb+=(a+b);}
		else if(a>b){sa+=(a+b);}
		else
		{
			sa+=a;
			sb+=b;
		}
	}
	cout<<sa<<" "<<sb<<"\n";
	sa=0;sb=0;
	}
	return 0;
}