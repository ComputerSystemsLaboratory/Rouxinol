#include<iostream>
#include<cmath>
#include<vector>
#include<utility>

using namespace std;


int partition(vector<int>& A,int p){
  int x=0;
  int i=0;

  //partition 基準
  int r=A.size()-1;

  x = A[r];
  i =p-1;
   for(int j=0;j<r;j++){
      if(A[j]<=x){
          i++;
          swap(A[i],A[j]);
      }
   }
   swap(A[i+1],A[r]);
   return i+1;
}











int main(){

    int n=0;
    int temp = 0;
    int q=0;
    cin >> n;
    vector<int> A;

    for(int i=0;i<n;i++){
        cin >> temp;
        A.push_back(temp);
    }

    q = partition(A,0);
 
    for(int i=0;i<n;i++){
        if(i!=0)cout << " ";
        if(i==q){cout << "[" << A[i]<< "]";}
         else {cout << A[i];}
    }
    cout << endl;

    return 0;
}
