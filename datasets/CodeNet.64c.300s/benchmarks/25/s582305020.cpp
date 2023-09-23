#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a[4],b[4];
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
		int hit=0,bl_a=0,bl_b=0,blow=0;
		for(int i=0;i<4;i++){
			if(a[i]==b[i])hit++;
			else{bl_a+=1<<(a[i]-1);bl_b+=1<<(b[i]-1);}
		}
		int ans=bl_a&bl_b;
		for(int i=0;i<10;i++)if(ans>>i&1)blow++;
		printf("%d %d\n",hit,blow);
	}
    return 0;
}