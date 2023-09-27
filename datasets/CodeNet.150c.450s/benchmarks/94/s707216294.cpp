#include<iostream>
#include<vector>
using namespace std;
int main(int argc,char* argv[]){
  int number,input,count=0;
  vector<int> values;
  cin >> number;
  for(int i=0;i<number;i++){
    cin >> input;
    values.push_back(input);
  }
  for(int i=0;i<number-1;i++){
    for(int j=number-1;j>i;j--){
      if(values[j-1]>values[j]){
        swap(values[j-1],values[j]);
        count++;
      }
    }
  }
  for(int i=0;i<number;i++){
    if(i==number-1) cout << values[i] << endl;
    else cout << values[i] << " ";
  }
  cout << count << endl;
}