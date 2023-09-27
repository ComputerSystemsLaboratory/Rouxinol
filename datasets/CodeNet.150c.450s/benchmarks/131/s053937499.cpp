#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;
int a[100000];
int main(){
	int a[20],l,set=0;
	while(true){
	cin>>a[0]>>l;
	if(a[0]==0&&l==0)
		break;
	int count=1;
	while(true){
		int m[6];
		for(int i=0;i<l;i++){
			int r=pow(10,i+0.0);
			m[i]=a[count-1]/r%10;
		}
		sort(m,m+l);
		int big=0;
		for(int i=0;i<l;i++)
			big+=pow(10.0,i+0.0)*m[i];
		int small=0;
		for(int i=0;i<l;i++)
			small+=pow(10.0,l-i-1.0)*m[i];
		a[count]=big-small;
		bool t=false;
		for(int j=0;j<count;j++){
			if(a[count]==a[j]){
				t=true;
				set=j;
			}
		}
		if(t==true)
			break;
		count++;
	}
	cout<<set<<" "<<a[count]<<" "<<count-set<<endl;
	}
    return 0;
}