
#include <iostream>
using namespace std;
int main(){
  while(1){
    int score[3],tscore;
    for(int i=0;i<3;i++) cin >>score[i];

    if(score[0] == -1 && score[1] == -1 && score[2] == -1) break;

    if(score[0] == -1 || score[1] == -1){
      cout << "F" << endl;
      continue;
    }

    tscore=score[0]+score[1];

    if(tscore>=80){
      cout << "A" << endl;
      continue;
    }else if(tscore>=65 && tscore<80){
      cout << "B" << endl;
      continue;
  }else if(tscore>=50 && tscore<65){
      cout << "C" << endl;
      continue;
  }else if(tscore<30 && score[2] >= 50){
    cout << "C" << endl;
    continue;
  }else if(tscore<30 && score[2] < 50){
    cout << "F" << endl;
    continue;
  }else if(tscore>=30 && tscore<50 && score[2] < 50){
    cout << "D" << endl;
    continue;
  }else if(tscore>=30 && tscore<50 && score[2] >= 50){
    cout << "C" << endl;
    continue;
  }
    }
    return 0;
}