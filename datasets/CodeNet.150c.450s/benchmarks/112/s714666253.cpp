/**********************************************

1.data_convert.cpp
2.炭田高輝
3.sumita.takaki@gmail.com

last updated: 2013-07-10@17:49

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


        int n=0;

        while(1){

                int n=0;
                int k=0;
             
                cin >> n;
                if(n==0)break;
                vector <char> a(n);
                vector <char> b(n);

                for(int i=0; i< n; i++){

                        cin >> a[i] >> b[i];
                }
                
                cin >> k;
                vector <char> data(k);
                
                for(int i=0; i<k; i++){

                        cin >> data[i];
                        for(int j=0; j<n; j++){
                               
                                if(data[i] == a[j]){
                                        data[i] = b[j];
                                        break;
                                }
                        }
                }
                
                for(int i=0; i<k; i++){
                        cout << data[i];
                }

                cout <<endl;
                
        }
        
        
        return 0;
        
        
}