#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int c=0;
	vector<int> buf;
	while(cin>>n){
		c++;
		buf.push_back(n);
		if(c==5){
			sort(buf.begin(),buf.end());
			reverse(buf.begin(),buf.end());
			for(int i=0; i<buf.size(); i++){
				if(i!=0) cout<<" ";
				cout<<buf[i];
			}
			cout<<endl;
			buf.clear();
			c = 0;
		}
	}
	return 0;
}