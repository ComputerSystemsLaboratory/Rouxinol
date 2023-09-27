#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template< typename FirstType, typename SecondType >
struct PairComparator {
  bool operator()( const pair<FirstType, SecondType>& p1, const pair<FirstType, SecondType>& p2 ) const 
    {  
		return p1.first > p2.first;
    }
};
bool inMST(vector< std::pair<int,int> > & MST,int j) {
	for (int k=0;k<(int)MST.size();++k){
		if(j == MST[k].second)
			return true;
	}
	return false;
}
int main(){
	int n;
	cin >> n;
	vector<int> E(n*n,-1);
	vector<int> DPG(n,-1);
	vector< std::pair<int,int> > MST;
	for(int j=0;j<n;++j) {
		int u,k; 
		cin >> u >> k;
		for(int i=0;i<k;++i){
			int v,c;
			cin >> v >> c;
			E[u*n+v] = c;
		}
	}
	priority_queue<pair<int,pair<int,int> >,vector< pair<int,pair<int,int> > >,
		PairComparator<int,pair<int,int> > > r;

	int cost = 0;
	int i=0;
	MST.push_back(pair<int,int>(i,i));
	DPG[i] = 0;
	while((int)MST.size() < n) {
		int ii=i*n;
		for (int j=0;j<n;++j) {
			if (E[ii+j] >= 0) {
				pair<int,int> add = std::make_pair(i,j);
				if (!inMST(MST,add.second)){
					r.push(std::pair<int,std::pair<int,int> >(E[ii+j]+DPG[i],add));
				}
			}
		}
		pair<int,pair<int,int> > top;
		while (!r.empty()) {
			top = r.top();
			r.pop();
			if (!inMST(MST,top.second.second)){
				break;
			}
		}
		cost += top.first;
		MST.push_back(top.second);
		i = top.second.second;
		DPG[i] = top.first;
		for(int j=0;j<n;++j){
			if (DPG[j] < 0)continue;
			if (E[i*n+j] >= 0) {
				DPG[j] = std::min(DPG[j],DPG[i] + E[i*n+j]);
			}
		}
	}
	for (int j=0;j<n;++j) {
		cout << j << " " <<  DPG[j] << endl;
	}
}