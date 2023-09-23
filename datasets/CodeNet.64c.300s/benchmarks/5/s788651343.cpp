#include<iostream>
using namespace std;
int main(){
        int heights[10];
        for (int i = 0; i < 10; i++){
                cin>>heights[i];
        }
        int t3[3];
        for (int i = 0; i < 3; i++){
                t3[i]=0;
        }
        for (int i = 0; i < 10; i++){
                if(heights[i] > t3[0]){
                        t3[2] = t3[1];
                        t3[1] = t3[0];
                        t3[0] = heights[i];
                }else if (heights[i] > t3[1]){
                        t3[2] = t3[1];
                        t3[1] = heights[i];
                }else if (heights [i] > t3[2]){
                        t3[2] = heights[i];
                }
        }
        for (int i = 0; i < 3; i++){
                cout<<t3[i]<<"\n";
        }
        return 0;
}