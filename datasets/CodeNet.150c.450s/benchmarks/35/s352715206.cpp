#include <iostream>
#include <stack>
#include <stdio.h>
#include <cmath>
#include <utility>
using namespace std;
int main()
{
    int n;
	while(cin>>n&&n){
		int a[5000]={},sum[5000]={},m=-1000000;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum[i+1]=sum[i]+a[i];
		}
		for(int i=0;i<n;i++){//start
			for(int j=i;j<n;j++){//end
				int tmp=sum[j+1]-sum[i];
				//if(tmp<=0){i=j;break;}
				//printf("%d-%d:%d\n",i,j,tmp);
				m=max(m,tmp);
			}
		}
		cout<<m<<endl;
	}
    return 0;
}