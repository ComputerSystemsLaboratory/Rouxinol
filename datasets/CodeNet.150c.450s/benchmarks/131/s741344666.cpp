#include <iostream>
#include <algorithm>
using namespace std;
int num[10];
int n,l,k,temp;
int maxn,minn;
int a[21];
int ans1,ans2,ans3;
int main(){
	while(1){
		cin >> n>>l;
		if(!(n||l))break;
		a[0]=n;
		k=0;
		temp=0;
		while(1){
			temp=a[k];
			for(int i=0;i<l;i++){
				num[i]=temp%10;
				temp=temp/10;
			}
			sort(num,num+(l));
			maxn=minn=0;
			for(int i=0;i<l;i++){
				maxn=maxn*10+num[l-1-i];
				minn=minn*10+num[i];
			}
			k++;
			a[k]=maxn-minn;
			for(int i=0;i<k;i++){
				//cout <<a[i] <<endl;
				if(a[k]-a[i]==0){
					ans1=i;
					ans2=a[k];
					ans3=k-i;
					goto END;
				}
			}

		}
		END:;
		cout <<ans1 <<" " <<ans2 <<" " <<ans3 <<endl;
	}
}