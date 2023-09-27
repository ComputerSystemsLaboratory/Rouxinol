#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct H{
  vector<int> dat;
  void insert(int x){
    int i=(int)dat.size();
    dat.push_back(x);
    while(i>0){
      auto p=(i-1)/2;
      if(dat[p]<dat[i]){
        swap(dat[p], dat[i]);
        i=p;
      }else{
        break;
      }
    }
  }
  int front(){
    return dat[0];
  }
  void remove(){
    swap(dat[0], dat[dat.size()-1]);
    dat.pop_back();
    int len=(int)dat.size();
    int i=0;
    while(i*2+1<len){
      if(i*2+2<len){
        int j=(dat[i*2+1]>dat[i*2+2] ? i*2+1 : i*2+2);
        if(dat[i]<dat[j]){
          swap(dat[i], dat[j]);
          i=j;
        }else{
          break;
        }
      }else{
        if(dat[i]<dat[i*2+1]){
          swap(dat[i], dat[i*2+1]);
          i=i*2+1;
        }else{
          break;
        }
      }
    }
  }

};

int main(){
  H h;
  while(1){
    string s; cin>> s;
    if(s[0]=='e'){
      if(s[1]=='n') break;
      cout<< h.front()<< endl;
      h.remove();
    }else{
      int x; cin>> x;
      h.insert(x);
    }
  }
}

