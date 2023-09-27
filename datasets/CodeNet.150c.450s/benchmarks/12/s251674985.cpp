#include<iostream>
#include<vector>

using namespace std;

inline bool isParent(int idx){if(idx==0) return false; else return true;}
inline bool isLeft_child(int size,int idx){if((idx+1)*2>size) return false;else return true;}
inline bool isRight_child(int size,int idx){if((idx+1)*2+1>size) return false;else return true;}

inline int idx_parent(int node_num){ return node_num/2-1;}
inline int get_parent(vector<int> &vec,int idx){ return vec.at(idx_parent(idx+1));}
inline int idx_left_child(int node_num){ return node_num*2-1;}
inline int get_left_child(vector<int> &vec,int idx){ return vec.at(idx_left_child(idx+1));}
inline int idx_right_child(int node_num){ return node_num*2;}
inline int get_right_child(vector<int> &vec,int idx){ return vec.at(idx_right_child(idx+1));}
//ヒープを操作する関数に入れる前にindexを変換する
inline int idxToheap(int index){ return index+1;}
//実際の配列を操作するときにindexに変換
inline int heapToidx(int hnum){ return hnum-1;}

int main(void){

  int size;
  cin>>size;
  vector<int> vec(size);
  for(int i=0;i<size;i++) cin>>vec.at(i);
  for(int i=0;i<size;i++){

    cout<<"node "<<idxToheap(i)<<": key = "<<vec.at(i);
    if(isParent(i)) cout<<", parent key = "<<get_parent(vec,i);
    if(isLeft_child(vec.size(),i)) cout<<", left key = "<<get_left_child(vec,i);
    if(isRight_child(vec.size(),i)) cout<<", right key = "<<get_right_child(vec,i);
    cout<<", "<<endl;
  }
  return 0;
}

