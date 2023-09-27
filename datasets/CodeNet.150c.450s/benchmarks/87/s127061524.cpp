#include<bits/stdc++.h>
using namespace std;
#define int long long 

int table[15][10];
bool sign[15][10];

signed main(void){
  int H;
  while(cin >> H){
    
    if( H == 0 ){ return 0;}
    
    for(int i = 0; i < H; i++){
      for(int j = 0; j < 5; j++){ 
        cin >> table[H-i-1][j];
      }
    }// H方向に消える↪︎0方向に消える　としたい
    
    int ans = 0;
    
    while(true){ //消えるものがある限り続ける
      
      bool flag = true;
      
      for(int i = 0; i < H; i++){ 
        //５つ消える時について
        for(int j = 0; j < 5; j++){ sign[i][j] = false;} //初期化
        
        if( table[i][0] == table[i][1] && table[i][1] == table[i][2] && table[i][2] == table[i][3] && table[i][3] == table[i][4]){
          if( table[i][0] != -1 ){
  
          sign[i][0] = true;
          sign[i][1] = true;
          sign[i][2] = true;
          sign[i][3] = true;
          sign[i][4] = true;
          flag = false; ans += table[i][0]*5;
          }
        }//５つ全部消える場合
        
        else if( table[i][0] == table[i][1] && table[i][1] == table[i][2] && table[i][2] == table[i][3] ){
          if(table[i][0] != -1){
          sign[i][0] = true; sign[i][1] = true; sign[i][2] = true; sign[i][3] = true;
          flag = false; ans += table[i][0]*4;
          }
        }
        else if( table[i][1] == table[i][2] && table[i][2] == table[i][3] && table[i][3] == table[i][4] ){
          if(table[i][1] != -1){
          sign[i][1] = true; sign[i][2] = true; sign[i][3] = true; sign[i][4] = true;
          flag = false; ans += table[i][1]*4;
          }
        }
        //４つ消える場合
        else if( table[i][0] == table[i][1] && table[i][1] == table[i][2] ){
          if(table[i][0] != -1 ){ 
          sign[i][0] = true; sign[i][1] = true; sign[i][2] = true;
          flag = false; ans += table[i][0]*3;
          }
        }
        else if( table[i][1] == table[i][2] && table[i][2] == table[i][3] ){
          if(table[i][1] != -1){
          sign[i][1] = true; sign[i][2] = true; sign[i][3] = true;
          flag = false; ans += table[i][1]*3;
          }
        }
        else if( table[i][2] == table[i][3] && table[i][3] == table[i][4] ){
          if(table[i][2] != -1){
          sign[i][2] = true; sign[i][3] = true; sign[i][4] = true;
          flag = false; ans += table[i][2]*3;
          }
        }
        //3つ消える場合
        
      }//for-i 
      
      //以上コンボが決まるものについて印signをつけた
      vector<int> vec;
      for(int j = 0; j < 5; j++){ 
        vec.clear();
        for(int i = 0; i < H; i++){ 
          if( !sign[i][j] && table[i][j] != -1 ){ // 消さなものだけ残していく
            vec.push_back(table[i][j]);
          }
        }//for-H
        int m = vec.size();
        for(int i = 0; i < H; i++){ 
          if( i < m ){ 
           table[i][j] = vec[i];
          }
          else{
            table[i][j] = -1; //空いたところには-1を埋める
          }
        }//for-i
      }//for-j
      
      if(flag){ //もう消すところがなかった
        break;
      }
      
    }//while-true
    
    cout << ans << endl;
    
  }//while-cin
  
  return 0;
}
