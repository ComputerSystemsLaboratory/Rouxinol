#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int n;

  while(cin>>n,n){
    int temp1,temp2;
    vector<int> score;
    int mini=1000000;

    for(int i=0;i<n;++i){
      cin>>temp1;
      score.push_back(temp1);
    }

    sort(score.begin(),score.end());
      
    for(int i=0;i<n-1;++i){
      mini=min(mini,score[i+1]-score[i]);
	}

    cout<<mini<<endl;
  }
}
      