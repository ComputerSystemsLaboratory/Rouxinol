#include<iostream>
#include<string>
using namespace std;

int main(){
  int i,j,n,m;
  string id[300],id_2;
  cin >> n;
  for(i = 0; i < n; i++){
    cin >> id[i];
  }

  cin >> m;
    int count=0;
    int k=1;
  while(m>0){
    m--;
    cin >> id_2;
    for(i = 0; i < n; i++){
      if(id_2==id[i]){
	count+=k;
	k++;
      }
    }
    
    if(count==0){
      cout << "Unknown" << " " << id_2 << endl;
    }
    else if(count%2==0){
      cout << "Closed by" << " " << id_2 << endl;
      count=0;
    }else if(count%2!=0){
      cout << "Opened by" << " " << id_2 << endl;
      count=0;
    }
  }
  return 0;
}