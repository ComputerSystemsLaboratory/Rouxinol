#include <algorithm>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

struct Pos{
  int x,y;
  Pos(int a,int b){
    x=a;
    y=b;
  }
};

class Field{
  int cell_[10][5]={};
  int height_;

  void FallBlock(void){
    for(int col=0;col<5;col++){
      bool found_empty=false;
      int empty_row=11;
      for(int row=height_-1;row>=0;row--){
        if(!found_empty){
          if(cell_[row][col]==0){
            found_empty=true;
            empty_row=row;
          }
        }else{
          if(cell_[row][col]!=0){
            cell_[empty_row][col]=cell_[row][col];
            cell_[row][col]=0;
            empty_row--;
          }
        }
      }
    }
  }

  int EraseBlock(void){
    int result=0;
    std::vector<Pos> erased_pos;
    for(int row=0;row<height_;row++){
      for(int col_left=0;col_left<=2;col_left++){
        if(cell_[row][col_left]==cell_[row][col_left+1]&& cell_[row][col_left]==cell_[row][col_left+2]){
          erased_pos.push_back(Pos(row,col_left));
          erased_pos.push_back(Pos(row,col_left+1));
          erased_pos.push_back(Pos(row,col_left+2));
          int color=cell_[row][col_left];
          for(int add_col=col_left+3;add_col<5;add_col++){
            if(color==cell_[row][add_col]){
              erased_pos.push_back(Pos(row,add_col));
            }else break;
          }
          break;
        }
      }
    }
    for(auto tgt:erased_pos){
      result+=cell_[tgt.x][tgt.y];
      cell_[tgt.x][tgt.y]=0;

    }
    return result;
  }

public:
  Field(int h){
    height_=h;
  }
  void Set(int row,int col,int num){
    cell_[row][col]=num;
  }
  int Calc(void){
    int result=0;
    int in_turn=0;
    do{
      in_turn=EraseBlock();
      FallBlock();
      result+=in_turn;
    }while(in_turn>0);

    return result;

  }

};

int main(void) {
  cout << std::fixed << std::setprecision(10);
  cin.tie(0);
  std::ios::sync_with_stdio(false);

  while(1){
    int h;
    cin>>h;
    if(h==0) break;
    Field field(h);
    for(int i=0;i<h;i++){
      for(int j=0;j<5;j++){
        int num;
        cin>>num;
        field.Set(i,j,num);
      }
    }
    cout<<field.Calc()<<endl;
  }

  return 0;
}

