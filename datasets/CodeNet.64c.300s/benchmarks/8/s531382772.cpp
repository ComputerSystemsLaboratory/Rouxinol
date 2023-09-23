#include <iostream>
using namespace std;

void call(int n);
void mycall(int n);
bool include_three(int x);

int main()
{
  int n;
  cin >> n;
  mycall(n);
}

void mycall(int n){
  for(int i=1; i<=n;i++){
    if((i%3==0|include_three(i))){
      cout << " " << i;
    }
  }
  cout << endl;
}

bool include_three(int x){
  for (x; x>0; x/=10) {
    if (x%10==3) return true;
  }
  return false;
}
