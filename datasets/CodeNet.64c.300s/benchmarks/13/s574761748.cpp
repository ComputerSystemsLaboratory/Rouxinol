#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<string.h>
#include<math.h>
#include<utility>
#include<algorithm>
#include<functional>
using namespace std;
 
int n;
int s=0;
int a[45];

 
int main()
{
	cin>>n;

	if(n==0 || n==1){
		cout<<1<<endl;
		return 0;
	}
	a[0]=1;
	a[1]=1;

	for(int i=1;i<n;i++){
	s=a[i]+a[i-1];
	a[i+1]=s;
	}

	cout<<s<<endl;

    return 0;
}