#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main (){
  
  int n;
  
  while(1){
    cin >>n;
    if (n==0)break;
    
    vector<int> posx,posy;
    posx.push_back(0);
    posy.push_back(0);
    
    int i,posn,dir,x,y;
    
    for(i=0;i<n-1;i++){
      cin >> posn >> dir;
      if(dir==0){
	//左
	posx.push_back(posx[posn]-1);
	posy.push_back(posy[posn]);
      }else if(dir==1){
	//下
	posx.push_back(posx[posn]);
	posy.push_back(posy[posn]-1);
      }else if(dir==2){
	//右
	posx.push_back(posx[posn]+1);
	posy.push_back(posy[posn]);
      }else if(dir==3){
	//上
	posx.push_back(posx[posn]);
	posy.push_back(posy[posn]+1);
      }
      //cout << posx[i+1] <<endl;
      //cout << posy[i+1] <<endl;
    }
    
    sort(posx.begin(),posx.end());
    sort(posy.begin(),posy.end());
    
    x = (posx[posx.size()-1]+1) - posx[0];
    y = (posy[posy.size()-1]+1) - posy[0];
    
    cout << x << " " << y <<endl;
  }
  
  return 0;
}