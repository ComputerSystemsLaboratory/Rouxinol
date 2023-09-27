#include <iostream>
#include <vector>

using namespace std;

const int MAX_N=10000;

int S[MAX_N];
int w[MAX_N];

int getRoot(int x){
	//x???root?????¢???
	int r;
	for (r=x;r!=S[r];r=S[r]);
	return r;
}

void unite(int x,int y){
	//x??¨y?????????
	//root?????¢???
	int root1,root2;
	root1=getRoot(x);
	root2=getRoot(y);
	if (root1!=root2){
		if (w[root1]>=w[root2]){
			S[root2]=root1;
			w[root1]+=w[root2];
		}
		else{
			S[root1]=root2;
			w[root2]+=w[root1];
		}
	}
}

int same(int x,int y){
	//x??¨y??????????????????????????????1??????????????°0?????????
	int root1,root2;
	root1=getRoot(x);
	root2=getRoot(y);
	if (root1==root2){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int n,q;
	cin>>n>>q;
	for (int i=0;i<n;i++){
		S[i]=i;
		w[i]=1;
	}
	vector<int> out;
	for (int i=0;i<q;i++){
		int com,x,y;
		cin>>com>>x>>y;
		if (!com){
			//unite
			unite(x,y);
		}
		else{
			//same
			out.push_back(same(x,y));
		}
	}
	for (int i=0,l=out.size();i<l;i++){
		cout<<out[i]<<endl;
	}
	return 0;
}