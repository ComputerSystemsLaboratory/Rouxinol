#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
	int n;
	while(cin>>n){
		if(n==0) break;
		vector<char> ans;
		map<char,char> M;
		for(int i=0;i<n;i++){
			char in,out;
			cin>>in>>out;
			M[in]=out;
		}
		
		int k;
		cin>>k;
		for(int i=0;i<k;i++){
			char s;
			cin>>s;
			if(!M.count(s)){
				ans.push_back(s);
			}
			else ans.push_back(M[s]);
		}
		for(int i=0;i<ans.size();i++)
			cout<<ans[i];
		cout<<endl;
	}
	return 0;

}