#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

int landscape[52][52];
int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

int main() {
  int w,h,t;
  while(cin>>w>>h, w||h) {
    memset(landscape, 0, sizeof(landscape));
    for(int i=1; i<=h; ++i)
      for(int j=1; j<=w; ++j)
	cin>>landscape[i][j];

    int count = 0;
    for(int i=1; i<=h; ++i) {
      for(int j=1; j<=w; ++j) {
	if(landscape[i][j] == 1) {
	  count++;
	  stack< pair<int, int> > st;
	  st.push(pair<int,int>(i,j));
	  while(!st.empty()) {
	    pair<int,int> p = st.top();
	    st.pop();
	    landscape[p.first][p.second] = 0;
	    for(int k=0; k<8; ++k)
	      if(landscape[p.first+dx[k]][p.second+dy[k]])
		st.push(pair<int,int>(p.first+dx[k], p.second+dy[k]));
	  }
	}
      }
    }

    cout<<count<<endl;
  }
}