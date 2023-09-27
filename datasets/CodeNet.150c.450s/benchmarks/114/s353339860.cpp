#include <iostream>
#include <queue>

using namespace std;




struct link { //link connecting x and y vertices
  int x;
  int y;
  int weight;
  bool operator<(const link& other) const
  {
    return weight > other.weight; // for min priority queue, trick the operator
  }
};

priority_queue<link> links;
int roots[100];

int root(int x) {
  if (x == roots[x]) {
    return x;
  } else {
    //roots[x] = root(roots[x]); //attach all to root
    return root(roots[x]);
  }
}

bool same(int x, int y) {
  return (root(x) == root(y));
}

void unite(int x, int y) {
  roots[root(x)] = root(y);
}


  
int main() {
  int min_cost = 0;
  int n;
  cin >> n;


  for (int i = 0; i < n; i++) {
    roots[i] = i; // initialize roots
    for (int j = 0; j < n; j++) {
      
      int weight;
      cin >> weight;
      if (j <= i ) continue;
      if (weight != -1) {
	link new_link = {i, j, weight};
	links.push(new_link);
	//cout << "link added has i j weight: " << i << " " << j << " " << weight << endl;
      }
    }
  }

  while (!links.empty()) {
    link cur_link = links.top();
    //cout << "cur link weight: " << cur_link.weight << " x: " << cur_link.x << " y: " << cur_link.y << endl;
    if (!same(cur_link.x, cur_link.y)) {
      min_cost += cur_link.weight;
      unite(cur_link.x, cur_link.y);
    }
    links.pop();
  }

  cout << min_cost << endl;
      
    
}