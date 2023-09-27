#include <iostream>

using namespace std;

double area2(const double x[][2]){
        double y[3][2];
        for(int i = 0; i < 3; i++){
                for(int j = 0; j < 2; j++){
                        y[i][j] = x[i][j];
                }   
        }   
        for(int i = 0; i < 3; i++){
                y[i][0] -= y[2][0];
                y[i][1] -= y[2][1];
        }   
        double s = y[0][0]*y[1][1]-y[0][1]*y[1][0];
        if(s < 0){ 
                s = -s; 
        }   
        return s;
}
bool isIn(double x[][2]){
        double x1[][2] = {{x[0][0], x[0][1]}, {x[1][0], x[1][1]}, {x[3][0], x[3][1]}};
        double x2[][2] = {{x[0][0], x[0][1]}, {x[2][0], x[2][1]}, {x[3][0], x[3][1]}};
        double s = area2(x) - area2(x+1) - area2(x1) - area2(x2);
        return !s; 
}
int main(){
        double x[4][2];
        while(cin >> x[0][0]){
                cin >> x[0][1];
                for(int i = 1; i < 4; i++){
                        for(int j = 0; j < 2; j++){
                                cin >> x[i][j];
                        }   
                }   
                if(isIn(x)){
                        cout << "YES" << endl;
                }else{
                        cout << "NO" << endl;
                }   
        }   
}