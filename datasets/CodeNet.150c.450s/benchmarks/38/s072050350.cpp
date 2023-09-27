#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

int main(void){
  int data1[1000],data2[1000],data3[1000],data4[1000];
  int g,i;
  cin >> g;
  for(i=0;i<g;i++){
    cin >> data1[i] >> data2[i] >> data3[i];
  }
  int m,j;
  i=0;
  for(i=0;i<g;i++){
    for(j=0;j<3;j++){
      if(data1[i] < data2[i]){ m = data2[i]; data2[i] = data1[i]; data1[i] = m;  }
      if(data2[i] < data3[i]){ m = data3[i]; data3[i] = data2[i]; data2[i] = m;  }
    }
    if(pow(data1[i],2) == (pow(data2[i],2)+pow(data3[i],2))) cout << "YES" <<endl;
    else cout << "NO" << endl;
  }

}