#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct DATA{
  int x;
  int count;
};

vector<DATA> MakeData(int);
DATA MakeOneData(int, int);

int main(){
  int i, j, n, m, count;
  vector<DATA> data1, data2;

  while(1){
    cin >> n >> m;
    if(n == 0 && m == 0) break;

    data1 = MakeData(n);
    data2 = MakeData(m);

    i = 0;
    j = 0;
    count = 0;
    while(i != data1.size() && j != data2.size()){
      if(data1[i].x == data2[j].x){
	count += (data1[i].count * data2[j].count);
	++i;
	++j;
      }else if(data1[i].x < data2[j].x){
	++i;
      }else{
	++j;
      }
    }

    cout << count << endl;
  }
  return 0;
}

vector<DATA> MakeData(int n){
  int i, j, x, count;
  vector<int> data1, data2;
  DATA _data;
  vector<DATA> data;

  for(i=0; i<n; ++i){
    cin >> x;
    data1.push_back(x);
  }
  for(i=0; i<data1.size(); ++i){
    for(j=i, x=0; j<data1.size(); ++j){
      x += data1[j];
      data2.push_back(x);
    }
  }

  sort(data2.begin(), data2.end());

  for(i=1, count=1; i<data2.size(); ++i){
    if(data2[i] == data2[i-1]){
      ++count;
    }else{
      data.push_back(MakeOneData(data2[i-1], count));
      count = 1;
    }
  }
  data.push_back(MakeOneData(data2[data2.size()-1], count));
  return data;
}

DATA MakeOneData(int n, int m){
  DATA data;
  data.x = n;
  data.count = m;
  return data;
}