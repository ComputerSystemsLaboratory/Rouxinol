#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
  int n,leg[2]={0,0},count=0;
  bool state=false;
  vector<string> f={"lu","ru","ld","rd"};
  string input;

  while(1){
  count =0;
  leg[0]=0;
  leg[1]=0;
  state = false;
  cin >> n;
  if(n==0){
    break;
  }
  for(int i=0;i<n;i++){
    cin >> input;
    if(input==f[0]){
      leg[0]++;
    }
    if(input==f[1]){
      leg[1]++;
    }
    if(input==f[2]){
      leg[0]--;
    }
    if(input==f[3]){
      leg[1]--;
    }

    if(leg[0]==leg[1] && leg[0]==1 && !state){
      count++;
      state=true;
      //cout << input << endl;
      continue;
    }
    if(leg[0]==leg[1] && leg[0]==0 && state){
      count++;
      state=false;
      //cout << input << endl;
      continue;
    }
    
  }
  cout << count << endl;
  }
  return 0;
}
      
    

