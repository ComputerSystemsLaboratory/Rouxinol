#include<iostream>
#include<string>
using namespace std;

string op="Opened by ";
string cl="Closed by ";
string un="Unknown ";
string ID[257];
string IC;
int n;
int flag=0;

void search(){
  for(int i=0;i<n;i++){
    if(IC==ID[i] && flag==0){
      flag=1;
      cout << op << IC << endl;
      return;
    }else if(IC==ID[i] && flag==1){
      flag=0;
      cout << cl << IC << endl;
      return;
    }
  }
    cout << un << IC << endl;
}

int main(){
  int m,i;
  
  cin >> n;
  for(i=0;i<n;i++){
    cin >> ID[i];
  }
  cin >> m;
  for(i=0;i<m;i++){
    cin >> IC;
    search();
  } 		  
}
    