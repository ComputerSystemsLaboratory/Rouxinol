#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int a,b=-1;
int main(){
	vector<int> train;
	while(cin>>a){
		if(a==0){
			cout<<train[b]<<endl;
			train.pop_back();
			b--;
		}
		else{
			train.push_back(a);
			b++;
		}
	}
	return 0;
}		

