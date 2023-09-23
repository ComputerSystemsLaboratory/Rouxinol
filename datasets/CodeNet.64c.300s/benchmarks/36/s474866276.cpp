#include <iostream>
 
using namespace std;


int main()
{
	int x[4];
	int times =3;
	int i,j;

	cin >>x[1];
	cin >>x[2];
	cin >>x[3];

	for(j=0;j<times-1;j++){
		for(i=1;i<times-j;i++){
			if(x[i]>x[i+1]){
				x[0]=x[i];
				x[i]=x[i+1];
				x[i+1]=x[0];
			}
		}
	}

	cout<<x[1]<<" "<<x[2]<<" "<<x[3]<<endl;

	//while(1);

	return 0;
}