/**********************************************

1.score.cpp
2.炭田高輝
3.sumita.takaki@gmail.com

last updated: 2013-07-10@11:54

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

int main (void){

        while(1){
                
                int a=0,total1=0;
                int b=0,total2=0;
                
                for(int i=0; i<4; i++){
                        
                        cin >> a;                
                        total1 = total1 + a;
                }
                if(a == NULL)break;
                
                for(int i=0; i<4; i++){
                        
                        cin >> b;
                        total2 = total2 +b;                
                }
                
                if(total1 > total2){
                        cout << total1 <<endl;
                }else{
                        cout << total2 << endl;
                }
                
        }



}