#include<iostream>
using namespace std;
int main()
{
	int n,x,i1,i2,i3,counter=0;
	while(1){	
		cin >> n >> x;
		if(n==0 && x==0)break;
		for(i1=1 ; i1<=n-2 ; i1++){
			for(i2=i1+1 ; i2<=n-1 ; i2++){
				for(i3=i2+1 ; i3<=n ; i3++){
					if(i1+i2+i3 == x)counter += 1;
				}
			}
		}
		cout << counter << endl;
		counter = 0;
	}
	return 0;
}