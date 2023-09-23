#include<iostream>
using namespace std;
int main(){
	int n,temp,cnt,minj;
	while(cin >> n){
		int k=0;
		int a[n];

		while(k!=n){
			cin >> a[k];
			k++;
		}
		cnt=0;
		for(int i=0;i<n;i++){
			minj =i;
			for(int j=i;j<n;j++){
				if(a[minj]>a[j]) minj =j;
			}
			if(minj!=i){
				temp=a[minj];
				a[minj]=a[i];
				a[i]=temp;
				cnt++;
			}
		}

	
		int l=0;
		while(l!=n-1){
			cout << a[l] << " ";
		l++;
		}
		cout << a[n-1]<< endl;
		cout << cnt << endl;
	}
	return 0;
}