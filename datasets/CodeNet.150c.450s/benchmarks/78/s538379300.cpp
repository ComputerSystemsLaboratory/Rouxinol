#include <iostream>
#include <vector>

#define MAX_ 1000010

using namespace std;

int nml[MAX_];
int kisu[MAX_];

int main(int argc, char const *argv[])
{
	int n;
	vector<int> vn;
	vector<int> vk;

	for(int i1=0;i1<MAX_;i1++){
		nml[i1]=0;
		kisu[i1]=0;
	}

	for(int i=1;;i++){
		int p=(i*(i+1)*(i+2))/6;
		if(p>MAX_) break;

		vn.push_back(p);
		if(p%2==1) {
			vk.push_back(p);
		}
	}

	nml[0]=0;
	kisu[0]=0;
	for(int i1=1;i1<MAX_;i1++){
		int i2=0;
		int min = 10;
		while(i1-vn[i2]>=0 && i2<vn.size()){
			if(min>nml[i1-vn[i2]]){
				min=nml[i1-vn[i2]];
			}
			i2++;
		}
		nml[i1]=min+1;

		i2=0;
		min=2000000;
		while(i1-vk[i2]>=0 && i2<vk.size()){
			if(min>kisu[i1-vk[i2]]){
				min=kisu[i1-vk[i2]];
			}
			i2++;
		}
		kisu[i1]=min+1;
	}

	while(1){
		cin>>n;
		if(n==0) break;

		cout<<nml[n]<<" "<<kisu[n]<<endl;

	}
	return 0;
}