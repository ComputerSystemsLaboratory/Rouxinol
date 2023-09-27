#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <cstdlib>


using namespace std;

void BubbleSort(char *a, int *c, int n){
  for(int i=0;i<n;i++){
    for(int j=n-1;j>i;j--){
      if(c[j] < c[j-1]){
	swap(a[j],a[j-1]);
	swap(c[j],c[j-1]);
      }
    }
  }
}

void SelectionSort(char *a, int *c, int n){
  for(int i=0;i<n;i++){
    int minj=i;
    for(int j=i;j<n;j++){
      if(c[minj] > c[j]){
	minj=j;
      }
    }
    if(minj!=i){
      swap(c[i],c[minj]);
      swap(a[i],a[minj]);
    }
  }
}

void isStable(string *a, string *b, int n){
  for(int i=0;i<n;i++){
    if(a[i]!=b[i]){
      cout << "Not stable" << endl;
      return;
    }
  }

  cout << "Stable" << endl;
  return;
}
  

int main(){
  int n;
  cin >> n;
  char *a = new char[n];
  int *b = new int[n];
  string *s = new string[n];
  
  for(int i=0;i<n;i++){
    cin >> s[i];
    a[i] = s[i][0];
    b[i] = atoi(&s[i][1]);
  }
  
  char *a1 = a;
  int *b1 = b;
  string *s1 = s;

  char *a2= new char[n];
  int *b2 = new int[n];
  string *s2 = new string[n];
  for(int i=0;i<n;i++){
    a2[i] = a[i];
    b2[i] = b[i];
    s2[i] = s[i];
  }
    
  BubbleSort(a1, b1, n);
  string *s1_out = new string[n];

  for(int i=0;i<n;i++){
    s1_out[i] = a1[i];
    s1_out[i] += b1[i] + '0';
  }
  // cout << endl;
  
  for(int i=0;i<n;i++){
    if(i!=0){cout<<" ";}
    cout << s1_out[i];
  }
  cout << endl;
  cout << "Stable" << endl;
  
  SelectionSort(a2, b2, n);
  string *s2_out = new string[n];

  for(int i=0;i<n;i++){
    s2_out[i] = a2[i];
    s2_out[i] += b2[i] + '0';
  }

  for(int i=0;i<n;i++){
    if(i!=0){cout<< " ";}
    cout << s2_out[i];
  }
  cout << endl;

  isStable(s1_out, s2_out, n);
}
  
    