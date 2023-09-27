#include <iostream>
#include <cstring>
using namespace std;
char ary[30];
int main(){
	cin>>ary;
	int N=strlen(ary);
	for(int i=N-1;i>=0;i--){
		cout<<ary[i];
	}
	cout<<endl;
	return 0;
}