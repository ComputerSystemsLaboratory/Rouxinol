#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int n,a,b,cnt;
	while(~scanf("%d",&n)){
		cnt=0;
		for(a=0;a<=18;a++){
			for(b=0;b<=18;b++){
				if(a+b==n) cnt+= (10-(int)abs(a-9)) * (10-(int)abs(b-9));
			}
		}
		cout << cnt << endl;
	}
	return 0;	
}