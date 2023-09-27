#include<iostream>
using namespace std;
int main(){
  int dayl[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
  int today[2];
  int dayt=0;
  int ans;
  while(cin>>today[0]>>today[1]){
    if(today[0]==0&&today[1]==0) break;
    for(int i=0;i<today[0];i++) dayt += dayl[i];
    dayt += today[1];
    ans = dayt % 7;
    if(ans==1) cout << "Thursday" << endl;
    else if(ans==2) cout << "Friday" << endl;
    else if(ans==3) cout << "Saturday" << endl;
    else if(ans==4) cout << "Sunday" << endl;
    else if(ans==5) cout << "Monday" << endl;
    else if(ans==6) cout << "Tuesday" << endl;
    else  cout << "Wednesday" << endl;
    dayt = 0;
  }
  return 0;
}