#include<iostream>
#include<algorithm>
#include<vector>

#define initialMax -1000000000

using namespace std;

int main(int argc,char* argv[]){
  vector<int> values;
  int number,input;
  cin>>number;
  for(int i=0;i<number;i++){
    cin>>input;
    values.push_back(input);
  }
  int minv=values[0],maxv=initialMax;
  for(int i=1;i<number;i++){
    maxv = max(maxv,values[i]-minv);
    minv = min(minv,values[i]);
  }
  cout << maxv << endl;
}