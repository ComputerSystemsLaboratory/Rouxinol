#include <cstdio>
#include <iostream>

using namespace std;


int main()
{
	int n[11],count=0,m;
	while(scanf("%d",&m)!=EOF){
		
		if(m==0){
			count--;
			cout<<n[count]<<endl;		
		}
		else{
			n[count]=m;
			count++;
		}
	}

	return 0;
}