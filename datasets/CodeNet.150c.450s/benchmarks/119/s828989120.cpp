#include<cstdio>
#include<stack>

using namespace std;

struct Coord {
  int row;
  int col;
};

int solve (int W, int H);
  
int main () {
  int W, H;

  while(1)
    {
      scanf("%d%d", &W, &H);
      if(W==0 && H==0) break;	
      printf("%d\n", solve(W,H));	
    }
}

int solve (int W, int H) {
  int n=0;
  char M[H+2][W+2];
  Coord start;
  for (int i=0; i<=W+1; i++) { M[0][i] = '0'; M[H+1][i] = '0'; }
  for (int i=1; i<=H; i++) { M[i][0] = '0'; M[i][W+1] = '0'; } 
  for (int i=1; i<=H; i++) {
    for (int j=1; j<=W; j++) {
      scanf(" %c", &M[i][j]);
    }
  }
  for(int i=1 ; i<=H ; i++) {
    for(int j=1 ; j<=W ; j++){
      if(M[i][j]=='1'){	
        start.row=i;
        start.col=j;
        M[start.row][start.col]='@';

        stack<Coord> S;
        S.push(start);
        while (!S.empty()) {
          Coord current = S.top(); S.pop();
          int D1[]={1,1,0,-1,-1,-1,0,1}; int D2[]={0,-1,-1,-1,0,1,1,1};
          for (int d=0; d<8; d++) {
            Coord nc = current;
            nc.row += D1[d];
            nc.col += D2[d];
            if(M[nc.row][nc.col]!='0' && M[nc.row][nc.col]!='*' && M[nc.row][nc.col]!='@')
	      {
	        M[nc.row][nc.col] = '*';
	        S.push(nc);
	      }
          } 
        }
        n++;
      }
    }
  }
  return n;
}