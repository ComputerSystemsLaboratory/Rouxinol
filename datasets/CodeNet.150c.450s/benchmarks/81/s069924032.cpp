#include<iostream>
#include<vector>
#include<algorithm>

#define INF 1000000

typedef std::pair<int,int> to_cost;

std::vector<std::vector<to_cost> >v(10);
std::vector<int>min(10,INF);

void calc(int i){
	for(int j=0;j<v[i].size();j++){
		if(min[i]+v[i][j].second<min[v[i][j].first]){
			min[v[i][j].first]=min[i]+v[i][j].second;
			calc(v[i][j].first);
		}
	}
}

int main(){
	int n;
	std::cin>>n;
	while(n!=0){
		for(int i=0;i<10;i++)v[i].clear();
		int res=INF,res_num;
		std::vector<int>sum(10,0);
		for(int i=0;i<n;i++){
			int a,b,c;
			std::cin>>a>>b>>c;
			v[a].push_back(to_cost(b,c));
			v[b].push_back(to_cost(a,c));
		}
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++)min[j]=INF;
			min[i]=0;
			calc(i);
			for(int j=0;j<10;j++){
				if(min[j]!=INF)sum[i]+=min[j];
			}
		}
		for(int i=0;i<10;i++){
			if(res>sum[i]&&sum[i]!=0)res=sum[i],res_num=i;
		}
		std::cout<<res_num<<" "<<res<<std::endl;
		std::cin>>n;
	}
	return 0;
}