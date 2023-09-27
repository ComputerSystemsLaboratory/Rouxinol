#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main() {
  int num;
  cin>>num;
  for(int i=0;i<num;i++){
    map<string,int> strmap;
    string str;
    cin>>str;
    for(int j=1;j<str.length();j++){
      string fir=str.substr(0,j);
      string sec=str.substr(j,str.length()-j);
      string revfir=fir;
      string revsec=sec;
      reverse(revfir.begin(),revfir.end());
      reverse(revsec.begin(),revsec.end());
      //1:????????????
      strmap[fir+sec]++;
      //2:2+1
      strmap[sec+fir]++;
      //3:1reverse+2
      strmap[revfir+sec]++;
      //4:1+2reverse
      strmap[fir+revsec]++;
      //5:2rev+1
      strmap[revsec+fir]++;
      //6:2+1rev
      strmap[sec+revfir]++;
      //7:1rev+2rev
      strmap[revfir+revsec]++;
      //8:2rev+1rev
      strmap[revsec+revfir]++;
    }
    cout << strmap.size() << endl;
    
      
      
      

    
  }
  
    return 0;
}