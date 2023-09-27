#include<iostream>
#include<stack>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

class Node{
public:
	int x,y;
	int node;
	Node(int p,int q){
		x=p;
		y=q;
	}
};

int main(){
	int w,h;
	while(1){
		cin>>w>>h;
		if(w==0 && h==0)break;
		stack<Node> st;
		int dt[h][w];
		bool flg[h][w];
		rep(i,h){
			rep(j,w){
				cin>>dt[i][j];
				flg[i][j]=false;
			}
		}
		int ho[8]={1,1,0,-1,-1,-1,0,1};
		int ve[8]={0,1,1,1,0,-1,-1,-1};
		int ans=0;
		rep(i,h){
			rep(j,w){
				if(!flg[i][j] &&  dt[i][j]==1){
					st.push(Node(j,i));
					while(!st.empty()){
						Node now=st.top();
						flg[now.y][now.x]=true;
						st.pop();
						rep(k,8){
							int nx=now.x+ho[k];
							int ny=now.y+ve[k];
							if(nx>=0 && ny>=0 && nx<w && ny<h && flg[ny][nx]==false){
								if(dt[ny][nx]==dt[now.y][now.x]){
									Node next(nx,ny);
									st.push(next);
								}
							}
						}
					}
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}