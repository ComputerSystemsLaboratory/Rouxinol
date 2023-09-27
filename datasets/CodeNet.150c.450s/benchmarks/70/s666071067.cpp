#include<iostream>
using namespace std;
int main(){
  
  int a,b;
  cin >> a >> b;
  while(a != 0){
    
    for(int i = 1;i < a;i++){
      if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10){
	b += 31;
      }
      else if(i==4 || i==6 || i==9 || i==11){
	b += 30;
      }
      else if(i == 2){
	b += 29;
      }
    }

    if(b%7 == 1) cout << "Thursday" << endl;
    else if(b%7 == 2) cout << "Friday" << endl;
    else if(b%7 == 3) cout << "Saturday" << endl;
    else if(b%7 == 4) cout << "Sunday" << endl;
    else if(b%7 == 5) cout << "Monday" << endl;
    else if(b%7 == 6) cout << "Tuesday" << endl;
    else cout << "Wednesday" << endl;
    cin >> a >> b;
  }
  return (0);
}