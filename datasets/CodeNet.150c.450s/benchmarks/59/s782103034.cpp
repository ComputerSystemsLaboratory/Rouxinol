#include <iostream>

using namespace std;
int main(){
	int n=0;
	int a[1001]={};
	
	int v=0;
	int j=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	for(int i=0;i<n;i++){
		v=a[i];
		j=i-1;
		while(j>=0 && a[j]>v ){
			a[j+1]=a[j];
			j--;
			a[j+1]=v;
		}
		
		for(int k=0;k<n;k++){
			cout << a[k];
			if(k!=n-1){
				cout <<" ";
			}else{
				cout <<endl;
			}
		}
	}
	return 0;
}