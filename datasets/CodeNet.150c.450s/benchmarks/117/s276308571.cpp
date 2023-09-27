#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <climits>
#include <cstring>


using namespace std;

const int N_MAX = 1000000;

int how_many_compared = 0;

void print_vector(vector<int> v){
  for(int i=0; i<v.size(); i++){
    cout << v[i];
    if(i!=v.size()-1) cout << " ";
    else cout << endl;
  }
}

vector<int> merge(vector<int> arr1, vector<int> arr2){
  int ix_1 = 0;
  int ix_2 = 0;
  vector<int> new_arr;
  //cout << "arr1: " << endl;
  //print_vector(arr1);

  //cout << "arr2: " << endl;
  //print_vector(arr2);
    
  while(ix_1 < arr1.size() && ix_2 < arr2.size()){
    //cout << "ix_1: " << ix_1 << ", arr1.size(): " << arr1.size() << ", arr2.size(): "<< arr2.size()<< endl;
    if(arr1[ix_1] < arr2[ix_2]){
      new_arr.push_back(arr1[ix_1]);
      ix_1++;
    }
    else{
      new_arr.push_back(arr2[ix_2]);
      ix_2++;
    }
    how_many_compared++;
  }
  //cout << "new_arr: " << endl;
  //print_vector(new_arr);
  if(ix_1 == arr1.size()){
    for(int i=ix_2;i<arr2.size();i++) new_arr.push_back(arr2[i]);
    how_many_compared += arr2.size() - ix_2;
  }
  if(ix_2 == arr2.size()){
    for(int i=ix_1;i<arr1.size();i++) new_arr.push_back(arr1[i]);
    how_many_compared += arr1.size() - ix_1;
  }
  //cout << "new_arr: " << endl;
  //print_vector(new_arr);
  return new_arr;
}

vector<int> mergesort(vector<int> arr){
  
  // return merged vector
  // if only one elem, return itself
  if(arr.size()<=1) return arr;
  
  int mid_ix = arr.size()/2;
  // cout << "mid_ix: " << mid_ix << ", arr.size(): "<< arr.size() << endl;
  vector<int> l_arr(arr.begin(), arr.begin()+mid_ix);
  vector<int> r_arr(arr.begin()+mid_ix, arr.begin()+arr.size());
  //print_vector(l_arr);
  //print_vector(r_arr);
  vector<int> left_arr = mergesort(l_arr);
  vector<int> right_arr = mergesort(r_arr);
  return merge(left_arr, right_arr);
}


int main(){
  int n;
  cin >> n;
  vector<int> v;
  for(int i=0;i<n; i++){
    int tmp;
    scanf("%d", &tmp);
    v.push_back(tmp);
  }
  print_vector(mergesort(v));
  cout << how_many_compared << endl;
  return 0;
  
}

