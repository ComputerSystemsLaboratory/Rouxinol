#include <iostream>

int main(int argc, char const *argv[]) {
  int Mid_score=0,Final_score=0,Retest_score=0;

  while(1){
    int grade=0;
    char rank;
    std::cin >> Mid_score >> Final_score >> Retest_score;
    if(Mid_score==(-1) && Final_score == (-1) && Retest_score == (-1))break;
    grade = Mid_score+Final_score;
    if(grade >= 80){
      rank = 'A';
    }else if(grade >= 65 && grade < 80){
      rank = 'B';
    }else if(grade >= 50 && grade < 65){
      rank = 'C';
    }else if(grade >= 30 && grade < 50){
      if(Retest_score >= 50){
        rank = 'C';
      }else rank ='D';
    }else if(grade < 30){
      rank = 'F';
    }
    
    if(Mid_score==(-1) || Final_score == (-1)){
      rank = 'F';
    }
    std::cout << rank << std::endl;
  }
  return 0;
}