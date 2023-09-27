#include <iostream>
#include <vector>

using namespace std;

struct Node{
  int key, pk, lk, rk;
};

int main(){
  int n, x;
  Node temp;
  vector<int> data;
  vector<Node> tree;

  cin >> n;
  for(int i=0;i<n;i++){
    cin >>x;
    data.push_back(x);
  }
  
  for(int i=0;i<n;i++){
    temp.key=data[i];
    if(i!=0) temp.pk=data[(i-1)/2];
    if(2*i+1<n) temp.lk=data[2*i+1];
    if(2*(i+1)<n) temp.rk=data[2*(i+1)];
    tree.push_back(temp);
  }
  
  for(int i=0;i<n;i++){
    cout << "node " << i+1 << ": key = " << tree[i].key << ", ";
    if(i!=0) cout << "parent key = " << tree[i].pk << ", ";
    if(2*i+1<n) cout << "left key = " << tree[i].lk << ", ";
    if(2*(i+1)<n) cout << "right key = " << tree[i].rk << ", ";
    cout << endl;
    }

  return 0;
}