#include<iostream>
#include<algorithm>
using namespace std;

int a[4];
int b[4];
int hit,blo;

int main(){
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]){
		cin>>b[0]>>b[1]>>b[2]>>b[3];
		hit=0;
		blo=0;
		for(int i=0;i<4;i++){
			if(a[i]==b[i]){
				hit++;
				a[i]=-1;
				b[i]=-1;
			}
		}
		sort(a,a+4);
		sort(b,b+4);
		for(int i=0;i<4;i++){
			if(a[i]==b[i]){
				blo++;
			}
		}
		blo-=hit;
		cout<<hit<<" "<<blo<<endl;
	}
	return 0;
}