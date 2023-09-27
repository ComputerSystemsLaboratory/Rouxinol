#include <iostream>
using namespace std;

int main() {
	int mth[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	char wks[][16]={"Wednesday","Thursday","Friday","Saturday","Sunday",
				"Monday","Tuesday"};
	int m,d;
	while(cin>>m>>d,m){
		int days=0;
		for(int i=1;i<m;i++) days+=mth[i];
		days+=d; cout<<wks[days%7]<<endl;
	}
}