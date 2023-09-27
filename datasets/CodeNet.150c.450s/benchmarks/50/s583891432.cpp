/**********************************************

1.
2.炭田高輝
3.sumita.takaki@gmail.com

last updated: 2013-07-10@17:33

 **********************************************/
#include<iostream>
#include<algorithm>
#include<sstream>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<string>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
using namespace std;


int main(void){


        while(1){

                int yen = 0;
                int oturi =0;
                int count = 0;

                cin >> yen;
                if(yen == 0)break;
                oturi = 1000 - yen;

                while(oturi/500 != 0){
                        oturi = oturi -500;
                        count++;        
                }
        

                while(oturi/100 != 0){
                        oturi = oturi -100;
                        count++;
                }
        

                while(oturi/50 != 0){
                        oturi = oturi -50;
                        count++;
                }
        

                while(oturi/10 != 0){
                        oturi = oturi -10;
                        count++;
                }
        

                while(oturi/5 != 0){
                        oturi = oturi -5;
                        count++;
                }
        

                count = count + oturi;        

                cout << count <<endl;

        }
    

        return 0;    


}