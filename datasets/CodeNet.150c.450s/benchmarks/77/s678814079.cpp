#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

struct DATA{
  int x;
  int y;
};

void North(int, int&, int&, vector<DATA>&);
void South(int, int&, int&, vector<DATA>&);
void East(int, int&, int&, vector<DATA>&);
void West(int, int&, int&, vector<DATA>&);

int main(){
  int i, n, m, x, y, d;
  string s;
  DATA _data;
  vector<DATA> data;

  while(1){
    cin >> n;
    if(n == 0) break;

    for(i=0; i<n; ++i){
      cin >> x >> y;
      _data.x = x;
      _data.y = y;
      data.push_back(_data);
    }

    cin >> m;

    for(i=0, x=10, y=10; i<m; ++i){
      cin >> s >> d;

      if(data.size() != 0){
	if(s == "N") North(d, x, y, data);
	else if(s == "S") South(d, x, y, data);
	else if(s == "E") East(d, x, y, data);
	else if(s == "W") West(d, x, y, data);
      }
    }

    if(data.size() == 0)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;

    data.clear();
  }

  return 0;
}

void North(int d, int& x, int& y, vector<DATA>& data){
  vector<DATA>::iterator i = data.begin();
  while(i != data.end()){
    if(x == (*i).x && y <= (*i).y && y+d >= (*i).y)
      i = data.erase(i);
    else
      ++i;
  }
  y += d;
}

void South(int d, int& x, int& y, vector<DATA>& data){
  vector<DATA>::iterator i = data.begin();
  while(i != data.end()){
    if(x == (*i).x && y-d <= (*i).y && y >= (*i).y)
      i = data.erase(i);
    else
      ++i;
  }
  y -= d;
}

void East(int d, int& x, int& y, vector<DATA>& data){
  vector<DATA>::iterator i = data.begin();
  while(i != data.end()){
    if(y == (*i).y && x <= (*i).x && x+d >= (*i).x)
      i = data.erase(i);
    else
      ++i;
  }
  x += d;
}

void West(int d, int& x, int& y, vector<DATA>& data){
  vector<DATA>::iterator i = data.begin();
  while(i != data.end()){
    if(y == (*i).y && x-d <= (*i).x && x >= (*i).x)
      i = data.erase(i);
    else
      ++i;
  }
  x -= d;
}