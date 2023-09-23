#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void findHitAndBlow(int imagineNum[],int guessNum[]);

int main()
{
    int imagineNum[50][4]={0},guessNum[50][4]={0};
    int counts=0;
    bool isHit[4] = {false};
       int hit = 0;
       int blow = 0;
    while (cin >> imagineNum[counts][0] >> imagineNum[counts][1] >> imagineNum[counts][2] >> imagineNum[counts][3] >> guessNum[counts][0] >> guessNum[counts][1] >> guessNum[counts][2] >> guessNum[counts][3]){

       isHit[0] = false;
       isHit[1] = false;
       isHit[2] = false;
       isHit[3] = false;
        hit =0;
        blow = 0;
       for(int i = 0; i< 4;i++){
            if(imagineNum[counts][i] == guessNum[counts][i]){
                hit++;
                isHit[i] = true;
            }
       }
        for(int i = 0;i < 4;i++){
            if(isHit[i]) {
                continue;
            }
            for(int j = 0;j < 4;j++){
                if(isHit[j]){
                    continue;
                }
                if(imagineNum[counts][i] == guessNum[counts][j]){
                    blow++;
                }
            }
        }
        cout << hit << " " << blow << endl;
        counts++;
    }

//    for(int i = 0; i< counts ; i++){
//        findHitAndBlow(imagineNum[i],guessNum[i]);
//    }
    return 0;
}
void findHitAndBlow(int imagineNum[],int guessNum[]){
   bool isHit[4] = {false};
   int hit = 0;
   int blow = 0;
   for(int i = 0; i< 4;i++){
        if(imagineNum[i] == guessNum[i]){
            hit++;
            isHit[i] = true;
        }
   }
    for(int i = 0;i < 4;i++){
        if(isHit[i]) {
            continue;
        }
        for(int j = 0;j < 4;j++){
            if(isHit[j]){
                continue;
            }
            if(imagineNum[i] == guessNum[j]){
                blow++;
            }
        }
    }
    cout << hit << " " << blow << endl;
}

/*
Let's play Hit and Blow game. A imagines four numbers and B guesses the numbers. After B picks out four numbers, A answers:
•	The number of numbers which have the same place with numbers A imagined (Hit)
•	The number of numbers included (but different place) in the numbers A imagined (Blow)
For example, if A imagined numbers:
9 1 8 2
and B chose:
4 1 5 9
A should say 1 Hit and 1 Blow.
Write a program which reads four numbers A imagined and four numbers B chose and prints the number of Hit and Blow respectively. You may assume that the four numbers are all different and within from 0 to 9.
Input
The input consists of multiple datasets. Each dataset set consists of:
a1 a2 a3 a4
b1 b2 b3 b4
, where ai (0 ≤ ai ≤ 9) is i-th number A imagined and bi (0 ≤ bi ≤ 9) is i-th number B chose.
The input ends with EOF. The number of datasets is less than or equal to 50.
Output
For each dataset, print the number of Hit and Blow in a line. These two numbers should be separated by a space.
Sample Input
9 1 8 2
4 1 5 9
4 6 8 2
4 6 3 2
Output for the Sample Input
1 1
3 0
*/

