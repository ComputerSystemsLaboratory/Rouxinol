#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int H,W;

void saiki(vector< vector<char> >& map,int i,int j,char c){

	map[i][j] = ' ';
	int dx =  j+1;
	int dy =  i+1;
	int mdx = j-1;
	int mdy = i-1;
	if(dy >= 0 && dy < H && map[dy][j] == c) saiki(map,dy,j,c); 
	if(mdy >= 0 && mdy < H && map[mdy][j] == c) saiki(map,mdy,j,c); 
	if(dx >= 0 && dx < W && map[i][dx] == c) saiki(map,i,dx,c);
	if(mdx >= 0 && mdx < W && map[i][mdx] == c) saiki(map,i,mdx,c);

}

int main(){

    bool flag = true;
    char temp;
    vector< vector<char> > map;
    while(flag){
	int count = 0;
	cin >> H >> W;
	if(H==0&&W==0)flag = false;
	else{
	for(int i=0;i<H;i++){
	    map.push_back( vector<char>()  );
	    for(int j=0;j<W;j++){
		cin >> temp;
		map[i].push_back(temp);
	    }
	}

	char c;
	for(int i=0;i<H;i++){
	    for(int j=0;j<W;j++){
		c = map[i][j];
		if(c != ' '){
		    count++;
		    saiki(map,i,j,c);
		}
	    }
	}
	    cout << count << endl;
	    map.clear();
	}
    }
	return 0;
    }