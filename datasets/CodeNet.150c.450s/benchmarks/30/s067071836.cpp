#include <iostream>
#include <algorithm>
using namespace std;

//??????????????????????????????
void show_array(int a[],int n){
  for(int i=0;i<n;i++){
    if(i>0) cout << " ";
    cout << a[i];
  }
  cout << endl;
}

int SelectionSort(int a[],int n){
  int count=0;
  for(int i=0;i<n;i++){
    int index=0;
    int minv=a[i];
    for(int j=i+1;j<n;j++){
      if(a[j]<minv){
        minv=a[j];
        index=j;
      }
      }
    if(i<index){
      int temp;
      temp=a[i];
      a[i]=a[index];
      a[index]=temp;
      count++;
    }
    }
    return count;
  }

  int main(){
    int n;
    cin >> n;
    int num_list[n];
    for(int i=0;i<n;i++) cin >> num_list[i];
    int count=SelectionSort(num_list,n);;
    show_array(num_list,n);
    cout << count << endl;
  }