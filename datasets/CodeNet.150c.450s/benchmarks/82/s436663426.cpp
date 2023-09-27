#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

class Dice {
    public:
        int s[6], tmp;
        Dice(int array[6]){
            s[0] = array[0];
            s[1] = array[1];
            s[2] = array[2];
            s[3] = array[3];
            s[4] = array[4];
            s[5] = array[5];
        }
        
        void N(){
            tmp = s[0];
            s[0] = s[1];
            s[1] = s[5];
            s[5] = s[4];
            s[4] = tmp;
        }   
        void E(){
            tmp = s[0];
            s[0] = s[3];
            s[3] = s[5];
            s[5] = s[2];
            s[2] = tmp;
            
        }
        void W(){
            tmp = s[0];
            s[0] = s[2];
            s[2] = s[5];
            s[5] = s[3];
            s[3] = tmp;
        }
        void S(){
            tmp = s[0];
            s[0] = s[4];
            s[4] = s[5];
            s[5] = s[1];
            s[1] = tmp;
        }
        int show_top(){
            return s[0];
        }
        
        int show_right(int num1, int num2){
            if(s[5] == num1) {
                N();
                N();
            }
            else if(s[1] == num1) N();
            else if(s[2] == num1) W();
            else if(s[3] == num1) E();
            else if(s[4] == num1) S();
            if(s[1] == num2) return s[2];
            else if(s[2] == num2) return s[4];
            else if(s[4] == num2) return s[3];
            else if(s[3] == num2) return s[1];
        }
};

int main(void){
    int nums[6];
    for(int i = 0; i < 6; i++){
        cin >> nums[i];
    }
    int N,num1, num2;
    cin >> N;
    for(int i = 0; i < N ;i++){
        cin >> num1 >> num2;
        Dice dice(nums);
        cout << dice.show_right(num1, num2) << endl;
    }
    return 0;
}
