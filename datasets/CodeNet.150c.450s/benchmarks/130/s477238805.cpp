#include<iostream>
using namespace std;

int main(){
    int gyou, retsu;
    int array1[100][100], array2[100][1], array3[100][1] = {{}};
    
    cin >> gyou >> retsu;
    for(int i = 0; i < gyou; i++){
        for(int j = 0; j < retsu; j++){
            cin >> array1[i][j];
        }
    }
    
    for(int i = 0; i < retsu; i++){
    cin >> array2[i][0];
  }
    
     for(int i = 0; i < gyou; i++){
        for(int j = 0; j < retsu; j++){
               array3[i][0] += array1[i][j] * array2[j][0];
            }
             cout << array3[i][0] << endl;
        }
    return 0;
}
