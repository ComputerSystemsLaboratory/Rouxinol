#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void swap(int *,int *);

int main(){
	int n,a[100],c=0,flag;
	cin >> n;
	for(int i=0;i<n;i++) cin >> a[i];
	
	flag=1;
	while(flag){
		flag=0;
		for(int j=n-1;j>0;j--){
			if(a[j]<a[j-1]){
				swap(&a[j],&a[j-1]);
				c++;
				flag=1;
			}
		}
	}



	for(int i=0;i<n;i++){
		cout << a[i];
		if(i!=n-1) cout << " ";
	}
	cout << endl;
	cout << c << endl;
	return 0;
}

void swap(int *a,int *b){
	int w;
	w= *a;
	*a=*b;
	*b=w;
}