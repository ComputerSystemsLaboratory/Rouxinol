#if 0
?????????X[0]???????????????????????\???????????¨??§???X[1],Y[1]???????????????????????????????????????
#endif

#include <iostream>
#include <string>
using namespace std;

int main(){
	int q;
	cin >> q;
	for(int a=0;a<q;++a){
		string X,Y;
		int L[1000+10][1000+10];
		cin >> X >> Y;
		for(int i=0;i<1000;++i) //???????????\????????????L????????????
			for(int j=0;j<1000;++j)
				L[i][j]=0;
	
		for(int j=1;j<X.size()+1;++j)
			for(int k=1;k<Y.size()+1;++k){
				if(X[j-1]==Y[k-1])
					L[j][k]=1+L[j-1][k-1];
				else
					L[j][k]=max(L[j-1][k],L[j][k-1]);
			}
		cout << L[X.size()][Y.size()] << endl;
	}
}