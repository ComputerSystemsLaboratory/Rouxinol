#include <iostream>
using namespace std;

int main(){
  int mid,fin,re;
  int cm,cf,cr;
  int s[50][3];
  for(int i=0;i<50;i++){
    for(int j=0;j<3;j++){
      cin >> s[i][j];
    }
    cin.ignore();
  }
  for(int i=0;i < 50;i++){
    for(int j=0;j<3;j++){
      cin >> s[i][j];
    }
    cin.ignore();
  }
  int i = 0;
  while(1){
    cm = s[i][0];
    cf = s[i][1];
    cr = s[i][2];
    if((cm==-1)&&(cf==-1)&&(cr==-1)){
      break;
    }else {
      if((cm==-1)||(cf==-1)){
	cout << "F"<<endl;
      }else{
	if(cm + cf >=80){
	  cout << "A"<<endl;
	}else if((cm + cf) >=65){
	  cout << "B" << endl;
	}else if((cm +cf) >= 50){
	  cout << "C" << endl;
	}else if((cm + cf) >=30){
	  if(cr >=50){
	    cout << "C" << endl;
	  }else{
	    cout << "D" << endl;
	  }
	}else{
	  cout << "F" << endl;
	}
      }
    }
    i = i + 1;
  }
  return 0;
}

