#include <iostream>
using namespace std;
int A[500002];
int O[500002];
int n;
int c = 0;
void msort(int b, int e){
	if (e-b==1) return;
	
	if (e-b==2)
	{
		int & ab = A[b];
		int & ae = A[b+1];
		if (ab > ae)
		{
			int abb = ab;
			ab=ae;
			ae=abb;
		}
		c+=2;
		return;
	}
	
	int m=(b+e)/2;
	msort(b,m);
	msort(m,e);
	int j=0;
	for(int i=b;i<m;i++){
		O[j++]=A[i];
	}
	O[j++]=0x7fffffff;
	for(int i=m;i<e;i++){
		O[j++]=A[i];
	}
	O[j++]=0x7fffffff;
	int o1=0;
	int o2=m-b+1; /// <-- was the bug.
	for (int i=b;i<e;i++){
		if(O[o1]<O[o2]){
			A[i]=O[o1++];
		}else{
			A[i]=O[o2++];
		}
		c++;
	}
}
int main(){
	cin >> n;
	for(int i=0;i<n;i++)cin>>A[i];
	msort(0,n);
	for(int i=0;i<n;i++){
		if (i) cout <<' ';
		cout<<A[i];
	}
	cout << endl<<c<<endl;
}