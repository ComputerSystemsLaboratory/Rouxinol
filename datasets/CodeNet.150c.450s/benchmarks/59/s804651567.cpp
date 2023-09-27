#include <iostream>
using std::cout;
using std::endl;
using std::cin;

template<typename T>
void insertion_sort(T in[],size_t size){
  T key;
  int j;
  auto show = [=]{
    for(int i=0;i<size-1;i++)cout << in[i] << ' ';
    cout << in[size-1] << endl;
  };
  for(int i=1;i<size;i++){
    show();
    key = in[i];
    j=i-1;
    while((j>=0)&&(in[j]>key)){
      in[j+1] = in[j];
      j--;
    }
    in[j+1] = key;
  }
  show();
}

int main(){
  int n;
  int in[100];

  cin >> n;
  for(int i=0;i<n;i++){
    cin >> in[i];
  }
  insertion_sort(in,n);
}