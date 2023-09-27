#include <iostream>

int main(){
  int input_num,finger_num,max_data;
  finger_num=21,max_data=100;
  std::cin >> input_num;
  int data[max_data];
  long long   fingers[max_data][finger_num];

  for(int i=0;i<input_num-1;i++){
    std::cin>>data[i];
    for(int j=0;j<finger_num;j++){
      fingers[i][j] = 0;
    }
  }

//初期化



  fingers[0][data[0]] = 1;
  for(int i=1;i<input_num-1;i++){
    for(int j = 0;j<finger_num;j++){
      if(data[i]+j <=20){
        fingers[i][data[i]+j] += fingers[i-1][j];
      }
      if(j-data[i]>=0){
        fingers[i][j-data[i]] += fingers[i-1][j];
      }

    }
  }

  int tmp; std::cin>>tmp;
  std::cout<<fingers[input_num-2][tmp]<<std::endl;


  return 0;
}

