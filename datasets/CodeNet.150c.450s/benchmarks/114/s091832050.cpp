#include <iostream>
#include <algorithm>

using namespace std;

int P[100000];

struct Line{
  int a, b, weight;
};

bool lineCompare(Line a, Line b){return a.weight < b.weight;}

void init(int n){
  for (int i = 0; i < n; ++i){P[i] = i;}
}

int root(int n){
  if(P[n]==n){return n;}
  return root(P[n]);
}

int unite_sum(Line x){
  int sum = 0;
  if(root(x.a) != root(x.b)){
    P[root(x.a)] = root(x.b);
    sum += x.weight;
  }
  return sum;
}

bool is_in_the_same_tree(int a, int b){
  return root(a) == root(b);
}


int main(){
  int n, i, j, k, sum;
  cin >> n;
  init(n);
  Line lines[n*n];
  k = 0;
  for (i = 0; i < n; ++i){
    for (j = 0; j < n; ++j){
      Line line;
      line.a = i;
      line.b = j;
      cin >> line.weight;
      lines[k] = line;
      k++;
    }
  }
  sort(lines, lines+n*n, lineCompare);
  
  sum = 0;
  for (i = 0; i < n*n; ++i){
    if(lines[i].weight == -1){
      continue;
    }else{
      sum += unite_sum(lines[i]);
    }
  }
  cout << sum << endl;
}