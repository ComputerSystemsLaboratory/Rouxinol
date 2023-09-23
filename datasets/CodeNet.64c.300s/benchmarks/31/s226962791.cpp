#include <iostream>

using namespace std;

int main(){
	int no[31]={},j;
			for(int i=0;i<28;i++){
			cin>>j;
			no[j]++;
		}
		for(int i=1;i<=30;i++)if(no[i]==0)cout<<i<<endl;
}