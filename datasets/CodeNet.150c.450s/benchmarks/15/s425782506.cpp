#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void init(vector<int>& v){
  int n = 0;
  int input;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> input;
    v.push_back(input);
  }
  sort(v.begin(), v.end());
  v.erase( unique(v.begin(), v.end()), v.end() );
}

int linearsearch(int key, vector<int> t, int count){
  int i = 0;
  t.push_back(key);
  while(t[i]!=key){
    i++;
  }
  if(t.size()-1!=i) return count+1;
  else return count;
}

int main(int argc, char* argv[]){
  vector<int> a, b;
  int count = 0;
  init(a);
  init(b);
  for (auto i : a) count = linearsearch(i, b, count);
  cout << count << endl;
}