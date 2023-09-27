#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1 << 30;

struct Matrix {
  Matrix(int r,int c){
    row = r;
    col = c;
  }
  int row,col;
};

int dp[100][100];

int rec(int left, int right, vector<Matrix>& M)
{
  if(left==right){ return 0; }
  
  if(dp[left][right]<MAX){ return dp[left][right]; }
  
  if(right-left==1){
    dp[left][right] = M[left].row * M[left].col * M[right].col;
    return dp[left][right];
  }
  
  int answer = MAX;
  for(int mid=left;mid<right;mid++){
    //////////////
    //int a = rec(left,mid,M)+rec(mid+1,right,M) + M[mid].row * M[mid].col * M[mid+1].col;
    //cout << "left:" << left << ",mid:" << mid << ",right:" << right << ",answer:" << a << endl;
    //////////////
    answer = min(answer,rec(left,mid,M)+rec(mid+1,right,M) + M[left].row * M[mid].col * M[right].col);
  }
  
  dp[left][right] = answer;
  return dp[left][right];
}


int main(void){
    // Your code here!
    int n;
    cin >> n;
    
    if(n==1){
      cout << 0 << endl;
      return 0;
    }
    
    vector<Matrix> M;
    for(int i=0;i<n;i++){
      int row,col;
      cin >> row >> col;
      M.push_back(Matrix(row,col));
    }
    
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        dp[i][j] = MAX;
      }
    }
    
    rec(0,n-1,M);

    cout << dp[0][n-1] << endl;
}

