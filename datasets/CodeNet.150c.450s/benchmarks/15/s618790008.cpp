#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;cin>>n;
  	vector<int> s(n);
  	for(int i=0;i<n;i++){cin>>s.at(i);}
  	int q;cin>>q;
  	vector<int> t(q);
  	for(int i=0;i<q;i++){cin>>t.at(i);}
  	sort(s.begin(),s.end());
  	sort(t.begin(),t.end());
  	int i=0,j=0,count=0;
  	while(i<n && j<q ){
    	if(s.at(i)==t.at(j)){
        	count++;
          	i++;j++;
        }else if(s.at(i)>t.at(j)){
        	j++;
        }else if(s.at(i)<t.at(j)){
        	i++;
        }
    }
  cout<<count<<endl;
}
