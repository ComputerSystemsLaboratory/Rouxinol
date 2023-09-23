#include <iostream>
using namespace std;

void bubble(int *pbuff, int n){
	int v;
	int j;
	int flag=1;
	int i=0;
	int count=0;
	while(flag){
		flag=0;
		for(int i=n-1;j<i;i--){
			if(pbuff[i]<pbuff[i-1]){
				v=pbuff[i];
				pbuff[i]=pbuff[i-1];
				pbuff[i-1]=v;
				count++;
			}
			flag=1;
		}
		j++;
	}
		for(int j=0;j<n-1;j++) cout << pbuff[j]<<" ";
		cout << pbuff[n-1]<<endl;
		cout << count<<endl;
	return ;
}

int main()
{
	int n;
	cin>> n;
	int buff[100];
	for(int j=0;j<n;j++) cin >> buff[j];
	bubble(buff,n);
	return 0;
}

