#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
  int n1,n2,flag=0,oc=0;
  string dam;
  vector<string>id;
  cin >> n1;
  for(int i=0;i<n1;i++){
    cin >> dam;
    id.push_back(dam);
  }
  cin >> n2;
  for(int i=0;i<n2;i++){
    cin >> dam;
    flag=0;
    for(int j=0;j<n1;j++){
      if(dam==id[j]){
	flag=1;
	if(oc==0){
	  cout << "Opened by "<< dam<<endl;
	  oc=1;
	  break;
	}
	else {
	  cout << "Closed by "<< dam<<endl;
	  oc=0;
	  break;
	}
      }
    }
    if(flag==0){
      cout << "Unknown "<< dam << endl;
    }
  }
  return 0;
}