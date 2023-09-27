#include <iostream>
#include <map>
#include <vector>
#include <string>
 
#define ft first
#define sd second
 
using namespace std;
 
typedef pair<int,int> P;
 
map<int, P> mpp;
 
void preorder(int p)
{
  cout << " " << p;
  if(mpp[p].ft != -1) preorder(mpp[p].ft);
  if(mpp[p].sd != -1) preorder(mpp[p].sd);
}
 
void inorder(int p)
{
  if(mpp[p].ft != -1) inorder(mpp[p].ft);
  cout << " " << p;
  if(mpp[p].sd != -1) inorder(mpp[p].sd);
}
 
void postorder(int p)
{
  if(mpp[p].ft != -1) postorder(mpp[p].ft);
  if(mpp[p].sd != -1) postorder(mpp[p].sd);
  cout << " " << p;
}
 
int rootcheck(vector<int> vec)
{
  bool f;
 
  for(int i = 0; i < vec.size(); ++i){
    f = false;
    for(map<int, P>::iterator it = mpp.begin(); it != mpp.end() && !f; ++it)
      f = (it->sd.ft == vec[i] || it->sd.sd == vec[i]);
    if(!f) return vec[i];
  }
 
  return 0;
}
 
int main()
{
  int n, s, t, u, m;
  vector<int> vec;
 
  while(cin>>n && n){
    m = -1;
    while(n--){
      cin >> s >> t >> u;
      mpp[s] = P(t, u);
      vec.push_back(s);
    }
    m = rootcheck(vec);
 
    cout << "Preorder" << endl;
    preorder(m);
    cout << endl;
    cout << "Inorder" << endl;
    inorder(m);
    cout << endl;
    cout << "Postorder" << endl;
    postorder(m);
    cout << endl;
 
    mpp.clear();
  }
 
  return 0;
}
