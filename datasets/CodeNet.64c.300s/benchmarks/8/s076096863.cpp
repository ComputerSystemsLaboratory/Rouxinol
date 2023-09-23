#include<iostream>
using namespace std;
int IsThree(int x)
{
	int flag=0;
	for(int i=x;i>0;i/=10){
		if (i%10==3){
			flag=1;
			break;
		}			
	}
	return flag;
}
void call(int n)
{
	for(int i=1;i<=n;i++){
		if(i%3==0 || IsThree(i)==1)
		 cout<<" "<<i;
	}
	cout<<endl;
}

int main()
{
	int n;
	cin>>n;
	call(n);
	return 0;
}
