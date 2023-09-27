#include <iostream>
using namespace std;
static const int MAX=100001;

int parent(int i) {
  return i/2;
}
int left(int i) {
  return 2*i;
}
int right(int i) {
  return 2*i+1;
}
int main() {
  int H;
  cin>>H;
  int A[MAX];
  for (int i=1; i<=H; i++) {
    cin>>A[i];
  }
  for (int i=1; i<=H; i++) {
    cout<<"node "<<i<<": key = "<<A[i]<<", "<<flush;
    if (parent(i)>=1) {
      cout<<"parent key = "<<A[parent(i)]<<", "<<flush;
    }
    if (left(i)<=H) {
      cout<<"left key = "<<A[left(i)]<<", "<<flush;
    }
    if (right(i)<=H) {
      cout<<"right key = "<<A[right(i)]<<", "<<flush;
    }
    cout<<endl;
  }
  return 0;
}
