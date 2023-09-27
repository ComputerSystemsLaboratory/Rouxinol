#include <iostream>
using namespace std;

int main()
{
  int m,f,r;
  for( ; ; ){
    cin >> m >> f >> r;
    if(m==-1 && f==-1 && r==-1) break;
    
    if(m==-1 || f==-1){
      cout << 'F';
    }else if(m+f<30){
      cout << 'F';
    }else if(m+f<50 && m+f>=30 && r>=50){
	cout << 'C';
      }else if(m+f<50 && m+f>=30){
	  cout << 'D';
	}else if(m+f<65 && m+f>=50){
	    cout << 'C';
	  }else if(m+f<80 && m+f>=65){
	    cout << 'B';
	  }else if(m+f>=80){
	    cout << 'A';
	  }
	  cout << endl;
	  }
	return 0;
	}