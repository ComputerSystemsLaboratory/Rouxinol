#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
	int n,r;
	while(cin>>n>>r &&n && r){
		vector<int>data;
		for(int i=1;i<=n;i++)data.push_back(i);
		for(int i=0;i<r;i++){
			int p,c;
			cin>>p>>c;
			stack<int>st;
			for(int j=0;j<c;j++){
				
				int tmp=data[n-p];
				data.erase(data.begin()+n-p++);
				st.push(tmp);
				
				}
			
			while(!st.empty()){
				data.push_back(st.top());st.pop();
			}
		}
		cout<<data[n-1]<<endl;
	}
}