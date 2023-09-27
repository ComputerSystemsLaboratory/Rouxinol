#include <cassert>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <limits>
#include <numeric>
#include <iterator>

using namespace std;

class Card{
public:// variables
  char mark;
  int  num;

public:// constructors
  Card(char mark, int num){
    this->mark = mark;
    this->num  = num;
  }
  
public:// methods
  int comp(const Card & that) const
  { // this - that 
    return this->num - that.num;
  }

  inline bool operator>(const Card & that)  const{return (this->comp(that)>0);}
  inline bool operator>=(const Card & that) const{return (this->comp(that)>=0);}
  inline bool operator<(const Card & that)  const{return (this->comp(that)<0);}
  inline bool operator<=(const Card & that) const{return (this->comp(that)<=0);}

  inline bool operator==(const Card & that) const{
    // cout << "comp" << endl;
    // cout << "this: " << this->mark << ' ' << this->num << endl;
    // cout << "that: " << that.mark << ' ' << that.num << endl;
    return (this->mark==that.mark && this->num==that.num);}

  friend ostream& operator<<(ostream& os, const Card & c);
};

ostream& operator<<(ostream& os, const Card & c){
  os << c.mark << ' ' << c.num;
  return os;
}

int partition_tail_pivot(vector<Card>& a, int p, int r){
  auto piv = a[r];
  int i = p-1;
  for(int j = p; j < r; ++j){
    if(a[j] <= piv){
      ++i;
      swap(a[i], a[j]);
    }
  }
  swap(a[i+1], a[r]);
  return i+1;
}

void q_sort(vector<Card>& a, int p, int r){
  int q = partition_tail_pivot(a, p, r);
  if(p < q-1) q_sort(a, p, q-1);
  if(q+1 < r) q_sort(a, q+1, r);
}


int main(){
  ios::sync_with_stdio(false);

  int n;
  vector<Card> a; // 1 .. 10000
  cin >> n;
  for(int i = 0; i<n; ++i){
    //Card a_i;
    char mark_i;
    int num_i;
    cin >> mark_i;
    cin >> num_i;
    Card a_i (mark_i, num_i);
    a.push_back(a_i);
  }

  auto b = a;
  stable_sort(b.begin(), b.end());
  q_sort(a, 0, n-1);
  // for(auto b_i : b){
  //   cout << b_i << endl;
  // }
  // cout << "----" << endl;
  cout << (b==a?"Stable":"Not stable")
       << endl;
  // cout << (b[0]==a[0]?"OK":"NG")
  //      << endl;
  for(auto a_i : a){
    cout << a_i << endl;
  }

  return 0;
}