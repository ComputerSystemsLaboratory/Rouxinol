#include <iostream>
#include <vector>
using namespace std;

void print_vec(vector<int>& a){
  for(int i=0; i<a.size()-1; i++){
    cout << a[i] << " ";
  }
  cout << a[a.size()-1] << "\n";
}



int main(){
  int N;
  vector<int> array;
  cin >> N;
  for(int i=0; i<N; i++){
    int tmp;
    cin >> tmp;
    array.push_back(tmp);
  }

  for(int i=1; i<N; i++){
    print_vec(array);
    int tgt = array[i];
    int j = i-1;
    while(j>=0 && array[j] > tgt){
      array[j+1] = array[j];
      j--;
    }
    array[j+1] = tgt;

  }
  print_vec(array);
  

}