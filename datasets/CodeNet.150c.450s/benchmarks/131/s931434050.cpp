#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
#include<math.h>
using namespace std;

int makeA(int a,int l);

int main(){
  while(1){
    vector<int> aArray;
    int a0,l;
    cin >> a0 >> l;
    if(a0==0&&l==0) break;
    aArray.push_back(a0);
    int i=0;
    while(1){
      int a = makeA(aArray[i],l);
      //cout << i+1 << " " << a << endl;
      vector< int >::iterator it = find(aArray.begin(),aArray.end(),a);
      int pos = (int)distance( aArray.begin(), it );
      if(it!=aArray.end()){
        cout << pos << " " << a << " " << (i+1)-pos << endl;
        break;
      }
      aArray.push_back(a);
      i++;
    }
  }
 
  return 0;
}

int makeA(int a,int l){
  vector<int> aParts;
  int temp = a;
  for(int i=0;i<l;i++){
    aParts.push_back(temp%10);
    temp /= 10;
  }
  sort(aParts.begin(),aParts.end());

  int aMax=0,aMin=0;
  for(int i=0;i<l;i++){
    int pow10 = (int)pow(10,i);
    aMax += aParts[i]*pow10;
    aMin += aParts[l-i-1]*pow10;
  }
  //cout << "aMax:" << aMax << " aMin:" << aMin << endl;

  return aMax - aMin;
}