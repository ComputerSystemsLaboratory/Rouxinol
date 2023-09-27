#include <bits/stdc++.h>
using namespace std;

    int main() {
        
        long long n;
        cin >> n;
        
        long long ct=0,st=0,at=0,rt=0;
        
       while(n--){
             string s;
            cin>> s;
        
            if(s=="AC")
                ct++;
                
           else if(s=="WA")
                st++;
            
           else if(s=="TLE")
                at++;
           else if(s=="RE")
                rt++;
                
        
        }
        
        
   cout<<"AC x "<<ct<<endl;
     cout<<"WA x "<<st<<endl;
       cout<<"TLE x "<<at<<endl;
         cout<<"RE x "<<rt<<endl;
 
        
       return 0; 
        
        }