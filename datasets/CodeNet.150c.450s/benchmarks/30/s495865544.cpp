#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc,char* argv[]){
  int number,input,index,count=0;
  vector<int> values;
  cin >> number;
  vector<int>::iterator it;
  for(int i=0;i<number;i++){
    cin >> input;
    values.push_back(input);
  }
  for(int i=0;i<number-1;i++){
    it = min_element(values.begin()+i, values.end());
    index = distance(values.begin(), it);
    if(i!=index){
      swap(values[i],values[index]);
      count++;
    }
  }
  for(int i=0;i<number;i++){
    if(i==number-1) cout << values[i] << endl;
    else cout << values[i] << " ";
  }
  cout << count << endl;
}