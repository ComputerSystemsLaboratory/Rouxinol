#define MAX 100
#include <iostream>
using namespace std;

int a[MAX];
int n;
int count;


void bubbleSort(){
	int i;
	int flag=1;
	int t;

	while(flag){
		flag=0;
		for(i=n-1;i>0;i--){
			if(a[i-1]>a[i]){
				t=a[i-1];
				a[i-1]=a[i];
				a[i]=t;
				++flag;
				++count;
			}
		}

	}

	return;
}


int main(void){
	int i;

	cin>>n;
	for(i=0;i<n;i++)cin>>a[i];

	bubbleSort();

	for(i=0;i<n;i++){
		cout<<a[i];
		if(i!=n-1)cout<<" ";
	}
	cout<<endl<<count<<endl;



}