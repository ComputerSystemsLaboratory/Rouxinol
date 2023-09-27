#include<iostream>
#include<vector>
  using namespace std;



  int main(){
    int n;
    cin >> n;
    vector<int> vec(250);
    for(int i=1;i<=n;i++){
      cin>> vec[i];
    }

    for(int i=1;i<= n ; i++){
      cout<<"node "<<i<<": "<<"key = "<<vec[i]<<", ";
      if(i > 1){
      cout<<"parent key = "<<vec[i/2]<<", ";
      }
      if(2*i <= n){
      cout<<"left key = "<<vec[2*i]<<", ";
      }
      if(2*i+1 <= n){
        cout<<"right key = "<<vec[2*i+1]<<", ";
      }
     cout<<endl;
    }
    return 0;
  }

