#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main(void)
{
        int i,j,num,diff;
            
        while(1){
                int min = 1000000;
                cin >> num;
                if(num == 0){ 
                        break;
                }   
                    
                vector<int> data(num);
                for(i = 0; i < num; i++){
                        cin >> data[i];
                }   
                    
                for(i = 0; i < num - 1; i++){
                        for(j = i + 1; j < num; j++){
                                diff = abs(data[i] - data[j]);
                                if(diff <= min){
                                        min = diff;
                                }   
                        }   
                }   
                cout << min <<endl;
        }   
        return 0;
}