#include<bits/stdc++.h>
using namespace std;

// macro
#define rep(i,n) for(i=0;i<n;i++)
#define ll long long
#define all(v) v.begin(), v.end()

// code starts
int main()
{
	int h;
  cin>>h;
  while(h!=0)
  {
    vector<vector<int>> board(h,vector<int>(5));
    int i,j,k;
    rep(i,h)rep(j,5)cin>>board[i][j];
    int score=0;
    bool update=true;
    while(update)
    {
      update=false;
      rep(i,h)
      {
        int base=board[i][2];
        if(base==0)continue;
        int count=0;
        int kc=0;
        int st=0;
        rep(j,5)
        {
          if(board[i][j]==base)
          {
            if(kc==0&&j<3)st=j;
            kc++;
            count=max(count,kc);
          }
          else
          {
            kc=0;
          }
        }
        if(count>=3)
        {
          update=true;
          score+=base*count;
          for(j=st;j<st+count;j++)if(board[i][j]==base)
          {
            board[i][j]=0;
          }
        }
      }
      rep(j,5)
      {
        for(i=h-1;i>=0;i--)
        {
          if(board[i][j]!=0)continue;
          for(k=i-1;k>=0;k--)
          {
            if(board[k][j]!=0)
            {
              swap(board[i][j],board[k][j]);
              break;
            }
          }
        }
      }
    }
    cout<<score<<endl;
    cin>>h;
  }
}

