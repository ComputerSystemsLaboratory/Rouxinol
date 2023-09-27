#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> F[102];
int start[102]={0},END[102]={0};
bool visit[102]={0};
int Count=0;
void dfs(int now){
	start[now]=Count++;
	visit[now]=true;
	int len=F[now].size();
	for(int i=0;i<len;i++){
		int p=F[now][i];
		if(visit[p]==false){
		     dfs(p);
		}
	}
	END[now]=Count++;
}
int main() {
	int n;
    cin>>n;
    for (int i=0;i<n;i++) {
            int s,num;
            cin>>s>>num;
            s--;
            for (int j=0;j<num;j++) {
                int e;
                cin>>e;
                e--;
				if(e!=s){
					F[s].push_back(e);
				}
            }
        }
        for (int i=0;i<n;i++){
			if(visit[i]==false){
				dfs(i);
			}
        }      
        for (int i = 0; i < n;i++) {
            cout<<i+1<<" "<<start[i]+1<<" "<<END[i]+1<<endl;
        }
    return 0;
}
