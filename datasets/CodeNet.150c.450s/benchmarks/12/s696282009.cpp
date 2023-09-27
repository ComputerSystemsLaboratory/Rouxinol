#include <iostream>
using namespace std;

#define INF 2000000005

int hsize=0;
int A[250];

int getPK(int i){
  if (i==0)return -INF;
  return A[(i-1)/2];
}

int getLK(int i){
  if (i*2+1>=hsize)return -INF;
  return A[i*2+1];
}

int getRK(int i){
  if (i*2+2>=hsize)return -INF;
  return A[i*2+2];
}

int main(){
  cin >> hsize;
  for (int i=0;i<hsize;i++)cin >> A[i];

  for (int i=0;i<hsize;i++){
    cout << "node "<< i+1 <<": key = "<< A[i] <<", ";
    if (getPK(i)>-INF)cout << "parent key = "<< getPK(i) <<", ";
    if (getLK(i)>-INF)cout << "left key = "<< getLK(i)<<", ";
    if (getRK(i)>-INF)cout << "right key = "<< getRK(i) <<", ";
    cout << endl;
  }
  return 0;
}