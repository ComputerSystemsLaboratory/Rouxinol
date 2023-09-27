#include <iostream>
#include <vector>
using namespace std;
int N;
void space(vector<int> &a){
  for(int i = 0; i < N; i++){
    if(i > 0){
      cout << " ";
    }
    cout << a[i];
  }
  cout << endl;
}
void bublesort(vector<int> &a){
  bool flag = true;
  int count = 0;
  for(int i = 0; flag; i++){
    flag = false;
    for(int j = N - 1; j >= i+1; j--){
      if(a[j] < a[j-1]){
        swap(a[j],a[j-1]);
        flag = true;
        count++;
      }
    }
  }
  space(a);
  cout << count << endl;
}

int main(){
  cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }

  bublesort(a);

  return 0;
}
