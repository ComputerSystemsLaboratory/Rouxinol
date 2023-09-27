#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void swap(int *,int *);

int main(){
	int n,a[100],c=0,minj;
	cin >> n;
	for(int i=0;i<n;i++) cin >> a[i];
	
	for(int i=0;i<n;i++){
		minj=i;
		for(int j=i;j<n;j++){
			if(a[j]<a[minj]){
				minj=j;
			}
		}
		swap(&a[i],&a[minj]);
		if(i!=minj)c++;
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