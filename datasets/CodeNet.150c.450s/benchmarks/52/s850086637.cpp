#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v1;
	int a;
	while(cin>>a){
		if(a==0){
			a=v1.back();
			v1.pop_back();
			cout<<a<<endl;
		}else{
			v1.push_back(a);
		}
	}
	return 0;
}