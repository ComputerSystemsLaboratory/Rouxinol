#include<iostream>
using namespace std;

int cnt = 0;
void Selection_sort(int a[], int n){
	for(int i = 0; i < n-1; i++){
		int min = i;
		for(int j = i+1; j < n; j++)
		{
			if(a[j] < a[min]){
				min = j;
			}
		}
		int t = a[i]; a[i] = a[min]; a[min] = t;
		if(min != i)	cnt++;
	}
}
int main()
{
	int a[101], n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	Selection_sort(a, n);
	for(int j = 0; j < n; j++){
		if(j)
			cout<<" "<<a[j];
		else
			cout<<a[j];
	}
	cout<<endl<<cnt<<endl;
	return 0;
}
