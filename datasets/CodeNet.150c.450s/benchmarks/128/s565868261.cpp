#include <iostream>
#include <string>
using namespace std;
int main(){
	int i;
	string str,ans;
	char a[20];
	cin>>str;
	for(i=0;i<str.size();i++){
		a[i]=str[i];
	}
	for(int j=i-1;j>=0;j--){
		ans+=a[j];
	}
	cout<<ans<<endl;
	return 0;
}