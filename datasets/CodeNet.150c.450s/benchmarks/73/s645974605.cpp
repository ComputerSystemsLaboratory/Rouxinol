#include<iostream>
#include<vector>

using namespace std;

class RSQ{
public:
  int n;
  vector<int> d;

  RSQ(int size){
    initRSQ(size);
  }

  void initRSQ(int size){
    n = 1;
    //the size of array is power of 2
    while(n < size) n *= 2;
    //initialize all node in the segment tree
    d.resize(2*n, 0);
  }

  void add(int i, int x){
    d[i] += x;
  }

  int getSum(int s, int t){
    if(s == t) return d[s];

    int sum = 0;
    for(int i=s ; i<=t ; ++i){
      sum += d[i];
    }
    return sum;
  }
};

int main(){
  int n, q;
  int com, x, y;
  cin >> n >> q;
  RSQ rsq(n);

  for(int i=0 ; i<q ; ++i){
    cin >> com >> x >> y;
    x--;
    if(com == 0) rsq.add(x, y);
    else if(com == 1){
      y--;
      cout << rsq.getSum(x, y) << endl;
    }
  }
}

