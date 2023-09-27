#include <iostream>
#include <vector>
#include <queue>

int main(){
  char c;
  int x, y, atx, aty, ind, count = 1;
  std::vector<int> real;
  std::queue<int> q;

  std::cin >> x;
  std::cin >> y;

  while(x != 0 || y != 0){

    real.resize(x*y);

    for(int i = 0; i < y; i++){         //地図の読み込みと＠の座標の格納
      for(int j = 0; j < x; j++){
        std::cin >> c;
        if(c == '.'){

          real[i*x + j] = 1;

        }else if(c == '#'){

          real[i*x + j] = 0;

        }else if(c == '@'){

          real[i*x + j] = -1;
          atx = j;//atx と aty は＠の座標を意味している
          aty = i;

        }else{

          std::cout << "unexpected char input!" << std::endl;
          return 0;

        }
      }
    }

    //＠を起点にして探索を開始する。

    q.push(atx + aty * x);

    while( !q.empty() ){

      ind = q.front();
      q.pop();


      if( ind%x != 0){//左をチェック 左端でなければ
        if(real[ ind-1 ] == 1 ){

          real[ ind-1 ] = -1;
          q.push( ind-1 );
          count++;
        }
      }

      if( ind%x != x-1 ){//右をチェック 右端でなければ
        if(real[ ind+1 ] == 1){

          real[ ind+1 ] = -1;
          q.push( ind+1 );
          count++;
        }
      }

      if( ind-x > -1 ){//上をチェック 上端でなければ
        if(real[ ind-x ] == 1){

          real[ ind-x ] = -1;
          q.push( ind-x );
          count++;
        }
      }

      if( ind+x < x * y){//下をチェック 下端でなければ
        if(real[ ind+x ] == 1){

          real[ ind+x ] = -1;
          q.push( ind+x );
          count++;
        }
      }

    }

    std::cout << count << std::endl;

/*
    for(int i = 0; i < y;i++){
      for(int j = 0; j < x; j++){
        std::cout << real[i*x + j];
      }
      std::cout << std::endl;
    }
//*/
    std::cin >> x;
    std::cin >> y;
    count = 1;
  }

  return 0;
}

