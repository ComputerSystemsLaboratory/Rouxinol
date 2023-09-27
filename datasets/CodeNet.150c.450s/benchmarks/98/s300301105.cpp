#include <iostream>
using namespace std;
int main()
{
  int n,m; //number of cards                                     
  int ct[100],ch[100]; //each card                               
  int sub; //substraction                                        
  while(cin >> n >> m && n){
    int x=200+10;
    int tmpt=0,tmph=0; //temporary                               
    int st=0,sh=0; //sum of cards                                
    for(int i=0;i<n;i++){
      cin >> ct[i];
      st+=ct[i];
    }
    for(int i=0;i<m;i++){
      cin >> ch[i];
      sh+=ch[i];
    }
    //for(int i=0;i<n;i++)                                       
    //cout << ct[i] << endl;                                     
    //for(int i=0;i<m;i++)                                       
    //cout << ch[i] << endl;                                     
    //cout << st << endl;                                        
    //cout << sh << endl;                                        
    if(st>=sh){
      if((sh+st)%2==1)
        cout << "-1" << endl;
      else{
        sub=(st-sh)/2; //????????????????????????                        
        for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
            if(ct[i]-ch[j]==sub){
              if(ct[i]+ch[j]<x){
                x=ct[i]+ch[j];
                tmpt=ct[i];
                tmph=ch[j];
}
            }
          }
        }
        if(tmpt>0 && tmph>0)
          cout << tmpt << ' ' << tmph << endl;
        else
          cout << "-1" << endl;
      }
    }
    else if(sh>st){
      if((sh+st)%2==1)
        cout << "-1" << endl;
      else{
        sub=(sh-st)/2; //????????????????????????                        
        //cout << sub << endl;                                   
        for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
            if(ch[j]-ct[i]==sub){
              //cout << ct[i] << ch[j] << endl;                  
              if(ct[i]+ch[j]<x){
                x=ct[i]+ch[j];
                tmpt=ct[i];
tmph=ch[j];
              }
            }
          }
        }
        if(tmpt>0 && tmph>0)
          cout << tmpt << ' ' << tmph << endl;
        else
          cout << "-1" <<endl;
      }
    }
  }
}