#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[3],n;
	cin>>n;
	while(n>0){
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);

		if(a[0]*a[0] +a[1]*a[1]==a[2]*a[2]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		n--;
	}
	return 0;
}