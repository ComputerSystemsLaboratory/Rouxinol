#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,p,w,a[50];
	while(true){
	cin>>n>>p;
	if(n==0&&p==0)
		break;
	for(int i=0;i<n;i++)
		a[i]=0;
	w=p-1;
	a[0]=1;
	int i=1;
	while(true){
		if(w==0){
			w=a[i];
			a[i]=0;
		}
		else if(w!=0){
			a[i]++;
			w--;
		}
		if(a[i]==p)
			break;
		i++;
		i%=n;
	}
	cout<<i<<endl;
	}
    return 0;
}