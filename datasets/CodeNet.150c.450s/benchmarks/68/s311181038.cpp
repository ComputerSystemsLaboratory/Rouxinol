#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(void){

  int size,min_diff;
  while(true){
    cin>>size;
    if(size==0) break;
    vector<int> vec(size);
    for(int i=0;i<size;i++){
      cin>>vec.at(i);
  //    vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    min_diff=vec.at(1)-vec.at(0);
    for(int i=1;i<size-1;i++){
      int nowdiff=vec.at(i+1)-vec.at(i);
      if(min_diff>nowdiff) min_diff=nowdiff;
    }
    cout<<min_diff<<endl;
  }
  return 0;
}

