#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	int a[101]={0};
	int i,j,minj;
	int cut=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		minj=i;
		for(j=i;j<n;j++){
			if(a[j]<a[minj]){
				minj=j;
			}
		}
		if(minj!=i){
			swap(a[i],a[minj]);
			cut++;
		}
	}
	for(i=0;i<n;i++){
		if(i!=0)cout<<" ";
		cout<<a[i];
	}
	cout<<endl<<cut<<endl;
	return 0;
}
	