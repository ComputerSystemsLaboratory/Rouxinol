#include <iostream>
using namespace std;
int main()
{
	int b,a[3];
	for(int i = 0;i < 3;i++){
	cin>>a[i];
	}
	for(int j =0;j<3;j++){
		for(int w = 0;w<2;w++){
			if(a[w]<=a[w+1]){
			}
			else if(a[w]>a[w+1]){
				b=a[w];
				a[w]=a[w+1];
				a[w+1]=b;
			}
		}
	}
	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
   return 0;
}