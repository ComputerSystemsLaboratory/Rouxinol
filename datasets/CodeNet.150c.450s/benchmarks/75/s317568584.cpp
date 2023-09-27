#include<bits/stdc++.h>
using namespace std;
vector<int > q;
int main(){
	int n,num;scanf("%d",&n);
	for(int i=0;i<n;i++){
	scanf("%d",&num);
	q.push_back(num);
}
	 make_heap(q.begin(),q.end());
	 for(int i=0;i<n;i++)printf(" %d",q[i]); printf("\n");
	return 0;
} 
