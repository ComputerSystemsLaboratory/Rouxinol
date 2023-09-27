#include <iostream>
#include <algorithm>
using namespace std;
int n,p,w,m,mn;
int main(){
	while(cin>>n>>p){
		if(n==0&&p==0) break;
		int a[n];
		w=p;
		m=0;
		mn=0;
		for(int i=0;i<n;i++){
			a[i]=0;
		}
		while(p-m>0){
			for(int i=0;i<n;i++){
				if(w>0){
					w--;
					a[i]++;
				} else{
					w=w+a[i];
					a[i]=0;
				}
				m=max(m,a[i]);
				if(m-a[i]==0) mn=i;
			}
		}
		cout<<mn<<endl;
	}
    return 0;
}