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
void selectionsort(vector<int> &a){
  int minj, count = 0;
  for(int i = 0; i < N; i++){
    minj = i;
    for(int j = minj; j < N; j++){
      if(a[j] < a[minj]){
        minj = j;
      }
    }
    int sw = a[i]; a[i] = a[minj], a[minj] = sw;
    if(i != minj) {
      count++;
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

  selectionsort(a);

  return 0;
}
