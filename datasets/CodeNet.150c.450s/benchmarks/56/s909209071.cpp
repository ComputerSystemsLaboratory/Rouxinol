#include <iostream>
using namespace std;
int main ()
{
	long long int x,min,max,sum,N;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>x;
		if(i==0)max=min=sum=x;
		else {
			if(x<min)min=x;
			if(x>max)max=x;
			sum+=x;
		}
	}
	cout<<min<<" "<<max<<" "<<sum<<endl;
}