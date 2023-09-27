#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
bool a[1100000]={0};
a[1]=1;
for(int i=2;i<550001;i++){
	if(a[i]==1) continue;
	int j=2*i;
	while(j<1100000){
		a[j]=1;
		j=j+i;
	}
}
int aa,d,n;
while(cin>>aa>>d>>n && aa){
	int k=aa;
	while(n>0){
		if(a[k]==0){
			n--;
		}
		k=k+d;
	//	cout<<k<<" "<<n<<endl;
	}

	cout<<k-d<<endl;
}



	return 0;
}