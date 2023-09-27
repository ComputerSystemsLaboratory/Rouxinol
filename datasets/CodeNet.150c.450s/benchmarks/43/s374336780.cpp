#include <iostream>

using namespace std;

int main()
{
	int n,a,b;
	int suma,sumb;
	while(cin>>n,n){
		suma=sumb=0;
		for(int i=0; i<n; i++){
			cin>>a>>b;
			if      ( a<b ){
				sumb += a+b;
			}else if( a>b ){
				suma += a+b;
			}else{
				suma += a;
				sumb += b;
			}
		}
		printf("%d %d\n",suma,sumb);
	}
	return 0;
}