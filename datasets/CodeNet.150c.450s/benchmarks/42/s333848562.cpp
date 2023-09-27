#include<iostream>
#include<queue>
#include<string>
#include <cstdlib>
struct gay{
	std::string taskname;
	int tasktime;
};
int main(){
	gay gay_meme;
	std::queue<gay> G;
	int n,q,b,ctime=0;
	std::string fag;
	std::cin>>n>>q;
	for(int i=0;i<n;i++){
		std::cin>>fag>>b;
		gay_meme.taskname=fag;gay_meme.tasktime=b;
		G.push(gay_meme);
	}
	while(!(G.empty())){
		if(G.front().tasktime>q){
			gay_meme.taskname=G.front().taskname;
			gay_meme.tasktime=G.front().tasktime-q;
			G.push(gay_meme);
			G.pop();
			ctime+=q;
		}
		else{
			ctime+=G.front().tasktime;
			std::cout<<G.front().taskname<<" "<<ctime<<"\n";
			G.pop();
		}
	}
	return 0;
}