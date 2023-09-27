#include<iostream>
using namespace std;

int main(){
	const int max=20*2000;
	int n;
	cin >> n;
	int checkList[max]={};
	int i,j,x;
	int lim=0;
	
	checkList[0]=1;
	for (i=0;i<n;i++){
		cin >> x;
		for (j=lim;j>=0;j--){
			if (checkList[j]==1){
				checkList[j+x]=1;
			}
		}
		lim+=x;
	}
	
	int q;
	cin >> q;
	for (i=0;i<q;i++){
		cin >>x;
		if (checkList[x]==1){
			cout <<"yes" <<endl;
		}else{
			cout << "no" << endl; 
		}
	}
	
	return 0;
}