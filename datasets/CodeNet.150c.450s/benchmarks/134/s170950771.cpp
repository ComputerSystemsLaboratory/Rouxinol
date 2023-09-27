#include<iostream>
#include<algorithm>
using namespace std;

int n;
int p[30], l[30], r[30];

void preParse(int i){
  if(i == -1) return ;

  cout << " " << i;
  if(l[i] != -1) preParse(l[i]);
  if(r[i] != -1) preParse(r[i]);
}

void inParse(int i){
  if(i == -1) return ;

  if(l[i] != -1) inParse(l[i]);
  cout << " " << i;
  if(r[i] != -1) inParse(r[i]);
}

void postParse(int i){
  if(i == -1) return ;

  if(l[i] != -1) postParse(l[i]);
  if(r[i] != -1) postParse(r[i]);
  cout << " " << i;
}

int main(){

  cin >> n;
  for(int i = 0;i < n;i++) p[i] = l[i] = r[i] = -1;
  for(int i = 0;i < n;i++){
    int id, left, right;

    cin >> id >> left >> right;
    l[id] = left;
    r[id] = right;
    p[left] = p[right] = id;
  }

  for(int i = 0;i < n;i++){
    if(p[i] == -1){
      cout << "Preorder" << endl;
      preParse(i);
      cout << endl;

      cout << "Inorder" << endl;
      inParse(i);
      cout << endl;

      cout << "Postorder" << endl;
      postParse(i);
      cout << endl;
    }
  }

  return 0;
}

