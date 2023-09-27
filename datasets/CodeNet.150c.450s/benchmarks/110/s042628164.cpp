#include<iostream>
#include<deque>
#include<utility>
#include<algorithm>
#include<stack>
#include<vector>

using namespace std;
vector< vector<char> > map;
 

int main(){

    int H,W,N;
    int HP=1;
    char temp;
    int dx[] = {1,-1,0,0};
    int dy[] = {0,0,1,-1};
    int count=0;
    cin >> H >> W >> N;
    vector< vector<bool> > fmap(H,vector<bool>(W));
    vector<bool> f(W);
    fill(f.begin(),f.end(),false);
    fill(fmap.begin(),fmap.end(),f);
    deque< pair<int,int> > next;
    for(int i=0;i<H;i++){
	map.push_back( vector<char>(W) );
	for(int j=0;j<W;j++){
	    cin >> temp;
	    if(temp == 'S') next.push_back(pair<int,int>(i,j));
	    map[i][j] = temp;
	}
    }
    int x,y;
    bool flag = false;
    deque< pair<int,int> > t;
    while(true){
	count++;
	while(true){
	    if(next.empty() && t.empty()) cout << HP <<endl;
	    y = next.front().first;
	    x = next.front().second;
	    next.pop_front();
	    for(int i=0;i<4;i++){
		if( dx[i]+x<0 || dx[i]+x>=W || dy[i]+y<0 || dy[i]+y>=H || map[y+dy[i]][x+dx[i]] == 'X')   continue;
		else if(HP == (int)(map[y+dy[i]][x+dx[i]] - '0') ){
		    HP++;
		    if(HP == N+1){
			flag = true;
		    }
		    t.clear();
		    next.clear();
		    t.push_back(pair<int,int>(y+dy[i],x+dx[i]));
		    fill(fmap.begin(),fmap.end(),f);
		    break;
		}
		else if(!fmap[y+dy[i]][x+dx[i]]){
		    t.push_back(pair<int,int>(y+dy[i],x+dx[i]));
		    fmap[y+dy[i]][x+dx[i]] = true;
		}

		
	    }
	    if(flag||next.empty()) break;
	}
	if(flag) break;
	swap(next,t);
    }
    cout << count << endl;
    return 0;
}