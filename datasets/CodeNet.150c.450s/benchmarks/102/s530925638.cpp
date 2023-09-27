#include <cstdio>
#include <set>
#include <vector>
using namespace std;

int main(){
  int H, W;
  while(scanf("%d%d", &W, &H)){
    if ((H == 0) && (W == 0)){
      break;
    }
    vector<vector<char> > m(H, vector<char>(W, ' '));
    pair<int,int> start(0,0);
    for (int i = 0; i < H; i++){
      for (int j = 0; j < W; j++){
        scanf(" %c", &(m[i][j]));
        if (m[i][j] == '@'){
          start.first = j;
          start.second = i;
	}
      }
    }
    set<pair<int,int> > q;
    set<pair<int,int> > already;
    q.insert(start);
    while(!q.empty()){
      pair<int,int> next = *(q.begin());
      q.erase(q.begin());
      if (already.find(next) == already.end()){
        already.insert(next);
        if ((next.first > 0) && (m[next.second][next.first-1] == '.')){
          q.insert(pair<int,int>(next.first-1, next.second));
	}
        if ((next.first < W-1) && (m[next.second][next.first+1] == '.')){
          q.insert(pair<int,int>(next.first+1, next.second));
	}
        if ((next.second > 0) && (m[next.second-1][next.first] == '.')){
          q.insert(pair<int,int>(next.first, next.second-1));
	}
        if ((next.second < H-1) && (m[next.second+1][next.first] == '.')){
          q.insert(pair<int,int>(next.first, next.second+1));
	}
      }
    }
    printf("%d\n", (int)already.size());
  }
  return 0;
}