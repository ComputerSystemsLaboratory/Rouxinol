#include <iostream>
#include <vector>

int main(void){
  using namespace std;
  
  std::vector <int> train; 
  
  int temp;
  
  while(1){
    cin >> temp;
    if(cin.eof()){break;}


    if(temp!=0){
      train.push_back(temp);
    }

    else if(temp==0)
    {
      int last=train.back();
      train.pop_back();
      cout << last << endl;
    }

  }

  return 0;
}