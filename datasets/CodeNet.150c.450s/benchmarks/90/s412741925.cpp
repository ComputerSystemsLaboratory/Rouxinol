#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

struct DATA{
  int number;
  int count;
};

void PushWordCount(int, vector<DATA>&);
bool Compare(const int&, const int&);

int main(){
  int i, n, max = 0;
  vector<int> Max;
  vector<DATA> data;

  while(cin >> n)
    PushWordCount(n, data);

  for(i=0; i<data.size(); ++i){
    if(data[i].count == max){
      Max.push_back(data[i].number);
    }else if(data[i].count > max){
      Max.clear();
      Max.push_back(data[i].number);
      max = data[i].count;
    }
  }
  sort(Max.begin(), Max.end());

  for(i=0; i<Max.size(); ++i)
    cout << Max[i] << endl;

  return 0;
}

void PushWordCount(int n, vector<DATA>& data){
  int isFound = 0;
  DATA newdata;
  vector<DATA>::iterator iter = data.begin();

  while(iter != data.end()){
    if(iter->number == n){
      isFound = 1;
      ++iter->count;
      break;
    }
    ++iter;
  }
  if(isFound == 0){
    newdata.number = n;
    newdata.count = 1;
    data.push_back(newdata);
  }
}