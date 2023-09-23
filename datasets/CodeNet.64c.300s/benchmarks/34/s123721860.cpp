#include <iostream>
using namespace std;

void inserionsort(int *pbuff, int n){
	int v;
	int j;
	for(int i=1;i<n;i++){
		v=pbuff[i];
		j=i-1;
		while(pbuff[j]>v && j>=0){
			pbuff[j+1]=pbuff[j];
			j--;
		}
		pbuff[j+1]=v;
		for(int j=0;j<n-1;j++) cout << pbuff[j]<<" ";
		cout << pbuff[n-1]<<endl;
	}

	return ;
}

int main()
{
	int n;
	cin>> n;

	int buff[100];

	for(int j=0;j<n;j++) cin >> buff[j];

	for(int j=0;j<n-1;j++) cout << buff[j]<<" ";
	cout << buff[n-1]<<endl;
	inserionsort(buff,n);
	return 0;
}

