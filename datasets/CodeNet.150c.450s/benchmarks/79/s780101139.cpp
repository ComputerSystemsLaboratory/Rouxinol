#include <iostream>

using namespace std;

int main(){
	int n,r;
	while(1){
		cin>>n>>r;
		if(n==0&&r==0){
			break;
		}

		int *a;
		a = new int[n];
		for(int i=0;i<n;i++){
			a[i] = n-i;
		}
		for(int i=0;i<r;i++){
			int p,c;
			cin>>p>>c;
			int *data1,*data2;
			data1 = new int[p];
			data2 = new int[c];

			for(int i=0;i<p-1;i++){
				data1[i]=a[i];
			}
			for(int i=0;i<c;i++){
				data2[i]=a[i+p-1];
			}
			for(int i=0;i<c;i++){
				a[i]=data2[i];
			}
			for(int i=0;i<p-1;i++){
				a[i+c]=data1[i];
			}
		}

		cout<<a[0]<<endl;
	}
	return 0;
}