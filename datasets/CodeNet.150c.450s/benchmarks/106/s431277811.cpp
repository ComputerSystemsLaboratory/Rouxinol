#include <iostream>
 
using namespace std;
 
int main(){
	int a,b,c,i,z=0;
	cin>>a>>b>>c;
	i=a;
	while (i>=a && i<=b){
		if (c%i==0){
			z=z+1;
		}
		i++;
	}
	
	cout<<z<<endl;

    return 0;
}

