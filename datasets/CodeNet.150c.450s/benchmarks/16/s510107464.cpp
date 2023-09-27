#include<algorithm>
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
	//freopen("ALDS1_3_D.txt","r",stdin);
	stack<int>S1;
	stack<pair<int,int> >S2;
	char ch;
	int sum=0;
	for(int i=0;cin>>ch;i++){
		if(ch=='\\')S1.push(i);
		else if(ch=='/'&&S1.size()){
			int j=S1.top();
			S1.pop();
			int a=i-j;
			sum+=a;
			while(S2.size()&&S2.top().first>j){
				a+=S2.top().second;
				S2.pop();
			}
			S2.push(make_pair(j,a));
		}
	}
	vector<int>ans;
	while(S2.size()){
		ans.push_back(S2.top().second);
		S2.pop();
	}
	reverse(ans.begin(),ans.end());
	int size=ans.size();
	printf("%i\n%i",sum,size);
	for(int i=0;i<size;i++)printf(" %i",ans[i]);
	putchar('\n');
}
