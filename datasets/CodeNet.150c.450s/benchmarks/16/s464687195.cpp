#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	char c;
	stack<int> s;
	int i=0;
	int sum=0;
	int k=0;
   std::vector<int> v;
    stack<pair<int,int> > s2;
	while(cin>>c){
		i++;
		if(c=='\\'){
           s.push(i);
		}
		else if(c=='/' && s.size()>0){
			int j=s.top();s.pop();
			int a=i-j;
            sum+=a;
            while(s2.size()>0 && s2.top().first>j){
            	 a+=s2.top().second;s2.pop();
            }
            s2.push(make_pair(j,a));
                 
		}
	}
	cout<<sum<<endl;
	while(s2.size()>0){
		v.push_back(s2.top().second); s2.pop();
	}
	cout<<v.size();
	for(int i=v.size()-1;i>=0;--i){
		cout<<' '<<v[i];
	}
	cout<<endl;	
		return 0;
}
