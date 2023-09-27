#include <iostream>
using namespace std;

int main() {
	int h,A[251];
	cin>>h;
	for(int i=1;i<=h;i++)cin>>A[i];
	for(int i=1;i<=h;i++)
	{
		cout<<"node "<<i<<": key = "<<A[i]<<", ";
		if(i/2>=1)cout<<"parent key = "<<A[i/2]<<", ";
		if(i*2<=h)cout<<"left key = "<<A[i*2]<<", ";
		if(i*2+1<=h)cout<<"right key = "<<A[i*2+1]<<", ";
		cout<<endl;
	}
	return 0;
}