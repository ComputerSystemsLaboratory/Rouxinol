
#include<iostream>
#include <iomanip>
#include<vector>
#include<string>
#include<string.h>
#include<math.h>
#include<utility>
#include<algorithm>
#include<functional>
using namespace std;

int n;
int a[10000];
int s=0;
int b=0;


int main()
{
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	for(int i=0;i<n;i++){
		b=sqrt(a[i]);
		if(a[i]==2||a[i]==3)s++;
		for(int j=2;j<b+1;j++){
			
			
            if(a[i]%j==0)break;
		if(j==b)s++;
		}
	}

	cout<<s<<endl;

	return 0;
}