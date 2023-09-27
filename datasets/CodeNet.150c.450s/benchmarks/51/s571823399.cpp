#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[30],b[28];
	for(int i=1;i<=30;i++){
		a[i-1]=i;
	}
	for(int i=0;i<28;i++){
		cin>>b[i];
	}
	sort(b,b+28);
	int c[2]={0},j=-1,k=-1;
	for(int i=0;i<28;i++){
		j++;
		if(a[i]!=b[j]){
			k++;
			c[k]=a[i];
			j--;
		}
		if(j==27){
			break;
		}
	}
	if(c[0]==0){
		c[0]=29;
	}
	if(c[1]==0){
		c[1]=30;
	}
	cout<<c[0]<<endl<<c[1]<<endl;
	return 0;
}