#include<bits/stdc++.h>
using namespace std;
int a[20000];
int main()
{
	int N;cin>>N;
	for(int i=1;i<200;i++){
		for(int j=1;j<200;j++){
			for(int k=1;k<200;k++){
				if(i*i+j*j+k*k+i*j+j*k+k*i<10005)
					a[i*i+j*j+k*k+i*j+j*k+k*i]++;
			}
		}
	}
	for(int i=1;i<=N;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}