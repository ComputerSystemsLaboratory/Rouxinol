#include<cstring>
#include<cstdio>
#include<iostream>
#define SORT(a,n) for(int i=0;i<n-1;i++)for(int j=i+1,t;j<n;j++)if(a[i]<a[j]){t=a[i];a[i]=a[j];a[j]=t;}

 
using namespace std;

int main(){
	int a[5];
	cin >> a[0] >> a[1]>> a[2]>> a[3]>> a[4];

	SORT(a,5);

	cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << endl;

	return 0;
}