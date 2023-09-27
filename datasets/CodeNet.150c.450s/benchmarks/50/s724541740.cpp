#include <iostream>
#include <vector>
using namespace std;
int main(void){
    vector<int> pay;
    int coins[] = {500,100,50,10,5,1};
    while(true){
          int temp;
          cin >> temp;
          if(temp == 0)break;
          pay.push_back(temp);
    }
    
    for(int i = 0;i < pay.size();i++){
          int change = 1000 - pay[i];
          int total = 0;
          for(int j = 0;j < 6;j++){
                int n = change / coins[j];
                change -= n * coins[j];
                total += n;
          }
          cout << total << endl;
    }
}

