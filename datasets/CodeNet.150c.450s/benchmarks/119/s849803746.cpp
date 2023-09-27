/************************************
 * ???????????¢?´¢??§??¶?????°?????°??????????????°?????? *
 ************************************/

#include <iostream>
#include <queue>
#include <map>

#define LAND '1'  //??? char???
#define SEA  '0'   //??? char???

using namespace std;

/* ?????????
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
*/

/*8??????*/
int dx[] = {1,1,0,-1,-1,-1, 0, 1};
int dy[] = {0,1,1, 1, 0,-1,-1,-1};

bool input(vector< vector<char> > &m);
void delete_island(vector< vector< char > > &m, int x, int y);
void output(vector< vector< char> > m);


int main(){
  int w, h;
    
  while(cin >> w >> h, w && h){
    vector< vector< char > > m(h+2, vector<char>(w+2));
    input(m);
    
    int island = 0;
    for(int y = 0; y < m.size(); y++){
      for(int x = 0; x < m[y].size(); x++){
	if(m[y][x] == LAND){
	  delete_island(m,x,y);
	  island++;
	}
      }
    }
    cout << island << endl;
  }
}


bool input(vector< vector<char> > &m){
  for(int y = 0; y < m.size(); y++){
    for(int x = 0; x < m[y].size(); x++){
      if(y == 0 || x == 0 ||
	 y == m.size()-1 || x == m[y].size()-1){
	m[y][x] = SEA;
      }else{
	if(!(cin >> m[y][x])) return false;
      }
    }
  }
  return true;
}


 void delete_island(vector< vector< char > > &m, int x, int y){
   queue< pair< int, int > > q;
   q.push(make_pair(x,y));

   while(!(q.empty())){
     pair<int, int> cur = q.front();
     q.pop();
     if(m[cur.second][cur.first] == LAND){
       m[cur.second][cur.first] = SEA;
       for(int i = 0; i < sizeof(dx)/sizeof(int); i++){
	 q.push(make_pair(cur.first+dx[i],cur.second+dy[i]));
       }
     }
   }
}

void output(vector< vector< char> > m){
  for(int y = 0; y < m.size()-1; y++){
    for(int x = 0; x < m[y].size()-1; x++){
      cout << m[y][x] << " ";
    }
    cout << endl;
  }
  cout << endl;
}