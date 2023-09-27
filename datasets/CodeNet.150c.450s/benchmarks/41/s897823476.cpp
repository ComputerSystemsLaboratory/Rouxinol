#include<iostream>
#include<vector>
#include<string>
#include<array>
#include<algorithm>
#include<list>
#include<cmath>
#include<iomanip>
#include<queue>
#include<functional>
#include<climits>
#include<iterator>
using namespace std;

const double pi=4*atan(1.0);
using cMatrixRepEdges=std::vector<std::vector<int>>;
using cShortestPathMatrix=std::vector<std::vector<int>>;
using cPredecessorMatrix=std::vector<std::vector<int>>;

pair<cShortestPathMatrix,cPredecessorMatrix> solve_by_FloydWarshall(const cMatrixRepEdges& Edges){
	if(Edges.empty())return make_pair(cShortestPathMatrix(),cPredecessorMatrix());

	const int VertexNum=Edges.size();
	cShortestPathMatrix AnsDist=Edges;
	cPredecessorMatrix AnsPath=Edges;
	//?????????
	for(int i=0;i<VertexNum;++i){
		for(int j=0;j<VertexNum;++j){
			if(i==j){
				AnsPath[i][j]=-1;
				AnsDist[i][j]=0;
			}
			else if(AnsPath[i][j]==INT_MAX){
				AnsPath[i][j]=-1;
			}
			else{
				AnsPath[i][j]=i;
			}
		}
	}

	//?????????????????????
	for(int i=0;i<VertexNum;++i){
		for(int j=0;j<VertexNum;++j){
			for(int k=0;k<VertexNum;++k){
				if(AnsDist[j][i]!=INT_MAX && AnsDist[i][k]!=INT_MAX){
					if(AnsDist[j][k]>AnsDist[j][i]+AnsDist[i][k]){
						AnsDist[j][k]=AnsDist[j][i]+AnsDist[i][k];
						AnsPath[j][k]=AnsPath[i][k];
					}
				}
			}
		}
	}

	for(int i=0;i<VertexNum;++i){

		for(int j=0;j<VertexNum;++j){
			for(int k=0;k<VertexNum;++k){
				if(Edges[j][k]!=INT_MAX && AnsDist[i][j]!=INT_MAX){
					if(AnsDist[i][k]>AnsDist[i][j]+Edges[j][k]){
						return make_pair(cShortestPathMatrix(),cPredecessorMatrix());
					}
				}
			}
		}

	}

	return make_pair(AnsDist,AnsPath);
}

int main() {
	int N,M;
	cin>>N>>M;
	cMatrixRepEdges Edges(N,vector<int>(N,INT_MAX));
	for(int i=0;i<M;++i){
		int u,v,w;
		cin>>u>>v>>w;

		Edges[u][v]=w;
		//Edges[u].push_back(v);
	}

	auto ans=solve_by_FloydWarshall(Edges);

	if(ans.first.size()!=Edges.size()){
		cout<<"NEGATIVE CYCLE"<<endl;
	}
	else{
		for(const auto& dists:ans.first){
			string str;
			for(const auto& val:dists){
				if(val!=INT_MAX){
					str+=to_string(val);
				}
				else{
					str+="INF";
				}
				str+=" ";
			}
			str.pop_back();
			cout<<str<<"\n";
		}
	}

	//system("pause");
	return 0;
}