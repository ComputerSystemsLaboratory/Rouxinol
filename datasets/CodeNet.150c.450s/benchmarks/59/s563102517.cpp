/*
 * insertionSort.cpp
 *
 *  Created on: 2016/04/12
 *      Author: dkawa
 */

#include <iostream>
#define MAX 100

using namespace std;


int main(void){
	int a[MAX];
	int n;
	int i,j,k;
	int t;

	cin>>n;

	for(i=0;i<n;i++){
		cin>>a[i];
	}

	for(k=0;k<n;k++){
			cout<<a[k];
			if(k!=n-1)cout<<" ";
		}
	cout<<endl;

	for(i=1;i<n;i++){
		t=a[i];
		j=i-1;
		while(j>=0 && a[j]>t){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;

		for(k=0;k<n;k++){
				cout<<a[k];
				if(k!=n-1)cout<<" ";
			}
		cout<<endl;



	}

	return 0;
}