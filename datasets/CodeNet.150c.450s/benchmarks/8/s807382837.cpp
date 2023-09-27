#include<iostream>                                        
#include<string>                                          
using namespace std;                                      
                                                          
int main(){                                               
  int n;                                                  
  cin >> n;                                               
  string taro_card;                                       
  string hanako_card;                                     
  int taro_point = 0;                                     
  int hanako_point = 0;                                   
                                                          
  for(int i=0;i<n;i++){                                   
    cin >> taro_card >> hanako_card;                      
                                                          
    if(taro_card > hanako_card){                          
      taro_point += 3;                                    
    } else if(taro_card == hanako_card){                  
      taro_point++; hanako_point++;                       
    } else {                                              
      hanako_point += 3;                                  
    }                                                     
  }                                                       
                                                          
  cout << taro_point << " " << hanako_point << endl;      
                                                          
  return 0;                                               
}