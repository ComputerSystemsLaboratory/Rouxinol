#include <iostream>
using namespace std;

struct Card{char suit,value;};

//??????????????????????????????
void show_array(struct Card a[],int n){
  for(int i=0;i<n;i++){
    if(i>0) cout << " ";
    cout << a[i].suit << a[i].value;
  }
  cout << endl;
}

void BubbleSort(struct Card a[],int n){
  for(int i=0;i<n;i++){
    for(int j=n-1;j>i;j--){
      if(a[j].value<a[j-1].value){
        struct Card temp=a[j];
        a[j]=a[j-1];
        a[j-1]=temp;
      }
    }
  }
}

void SelectionSort(struct Card a[],int n){
  for(int i=0;i<n;i++){
    int index=0;
    int minv=a[i].value;
    for(int j=i+1;j<n;j++){
      if(a[j].value<minv){
        minv=a[j].value;
        index=j;
      }
      }
    if(i<index){
      struct Card temp;
      temp=a[i];
      a[i]=a[index];
      a[index]=temp;
    }
    }
  }

int main(){
  int n;
  cin >> n;
  struct Card cards1[n],cards2[n];
  for(int i=0;i<n;i++) {
    cin >> cards1[i].suit;
    cin >> cards1[i].value;
    cards2[i].suit=cards1[i].suit;
    cards2[i].value=cards1[i].value;
  }
  BubbleSort(cards1,n);
  show_array(cards1,n);
  cout << "Stable" << endl;
  SelectionSort(cards2,n);
  show_array(cards2,n);
  bool flag=true;
  for(int i=0;i<n;i++){
    if(cards1[i].suit != cards2[i].suit) flag=false;
  }
  if(flag) cout << "Stable" << endl;
  else cout << "Not stable" << endl;

  return 0;
}