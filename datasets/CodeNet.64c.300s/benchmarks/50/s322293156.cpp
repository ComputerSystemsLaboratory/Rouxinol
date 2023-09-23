#include<iostream>
using namespace std;

int cnt = 0;
void Bubble_sort(int a[], int n){
	for(int i = 0; i < n-1; i++)
		for(int j = 0; j < n-1-i; j++){
			if(a[j] > a[j+1]){
				int t = a[j]; a[j] = a[j+1]; a[j+1] = t;cnt++;
			}
		}
}


int main(){
	int a[101], n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	Bubble_sort(a, n);
	for(int i = 0; i < n; i++)
	{
		if(i)
			cout<<" "<<a[i];
		else
			cout<<a[i];
	}
	cout<<endl<<cnt<<endl;
	return 0;
}


