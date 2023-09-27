#include <bits/stdc++.h>
#define dummy (int)1e8
using namespace std;

struct data {
  int num, lef, righ, par;
};

int t;
string s;
vector<data> v;
vector<int> pre, in, pos;

void insert(int x);
void print();
void rec(int p);
bool find(int x);
void del(int x);

int main() {
  cin >> t;
  v.push_back({dummy, dummy, dummy, dummy});
  while(t--) {
    cin >> s;
    if(s == "print")
      print();
    else if(s == "find") {
      int x;
      cin >> x;
      if(find(x))
        cout << "yes" << endl;
      else
        cout << "no" << endl;
    }
    else if(s == "delete") {
      int x;
      cin >> x;
      del(x);
    }
    else {
      int x;
      cin >> x;
      insert(x);
    }
  }
  return 0;
}

void insert(int x) {
  int id = 0;
  while(!v.empty() && v[id].num != dummy) {
    int nownum = v[id].num;
    if(nownum > x) {
      if(v[id].lef == dummy) {
        v[id].lef = v.size();
        v.push_back({dummy, dummy, dummy, id});
      }
      else
        id = v[id].lef;
    }
    else if(nownum < x) {
      if(v[id].righ == dummy) {
        v[id].righ = v.size();
        v.push_back({dummy, dummy, dummy, id});
      }
      else
        id = v[id].righ;
    }
  }
  v[id].num = x;
}

void print() {
  pre.clear();
  in.clear();
  pos.clear();
  rec(0);
  for(int i = 0; i < pos.size(); ++i) cout << " " << in[i];
  cout << endl;
  for(int i = 0; i < pre.size(); ++i) cout << " " << pre[i];
  cout << endl;
}

void rec(int p) {
  pre.push_back(v[p].num);
  if(v[p].lef != dummy) rec(v[p].lef);
  in.push_back(v[p].num);
  if(v[p].righ != dummy) rec(v[p].righ);
  pos.push_back(v[p].num);
}

bool find(int x) {
  int id = 0;
  while(id != dummy && v[id].num != dummy) {
    if(v[id].num == x) return 1;
    if(v[id].num > x)
      id = v[id].lef;
    else if(v[id].num < x)
      id = v[id].righ;
  }
  return 0;
}

void del(int x) {
  int id = 0;
  while(id != dummy && v[id].num != dummy) {
    if(v[id].num == x) {
      int par = v[id].par;
      if(v[id].lef == v[id].righ && v[id].lef == dummy) {
        v[id].num = dummy;
        if(v[par].lef == id)
          v[par].lef = dummy;
        else
          v[par].righ = dummy;
      }
      else if(v[id].lef == dummy) {
        int chil = v[id].righ;
        v[chil].par = par;
        if(v[par].lef == id)
          v[par].lef = chil;
        else
          v[par].righ = chil;
        v[id].num = dummy;
      }
      else if(v[id].righ == dummy) {
        int chil = v[id].lef;
        v[chil].par = par;
        if(v[par].lef == id)
          v[par].lef = chil;
        else
          v[par].righ = chil;
        v[id].num = dummy;
      }
      else {
        int chil = v[id].lef, num;
        num = v[chil].num;
        del(v[chil].num);
        v[id].num = num;
      }
    }
    if(v[id].num > x)
      id = v[id].lef;
    else if(v[id].num < x)
      id = v[id].righ;
  }
  return;
}
