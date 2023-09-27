/**********************************************

1.
2.炭田高輝
3.sumita.takaki@gmail.com

last updated: 2013-07-10@17:04

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
                
                int n=0;
                int k=0;
                int total=0, answer=0;
               

                cin >> n >> k;
                if(n==0 && k==0)break;
                vector <int> data(n);
                
                for(int i=0; i<n; i++){
                        cin >> data[i];
                        //cout << "data[i]="<< data[i]<<endl;
                }

                for(int j=0; j<n-k+1; j++){
                        
                        if( j == 0){
                                for(int i=0; i<k; i++){
                                        total = total + data[j+i];
                                }
                                //cout << "subtotal1="<<total<<endl;
                        }else{
                                
                                total = total - data[j-1] + data[j+k-1];
                                //cout << "subtotal2="<<total<<endl;
                        }
                        //cout << "answer="<<answer<<"subtotal="<<total<<endl;
                        if( total > answer ){
                                answer = total;
                        }
                        //cout << "answer="<<answer<<endl;
                }
                
                cout << answer << endl;
                
        }

        return 0;

}