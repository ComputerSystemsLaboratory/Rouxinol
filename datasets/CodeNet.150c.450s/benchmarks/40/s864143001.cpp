#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <cstdlib>

using namespace std;

class sci1
{
private:
   
public:
   int s[6];
   //string hougaku;
   
   void set_scikoro(int* m1);
   void set_up_m(string m2);
   void m_print();
};

void sci1::set_scikoro(int* m1)
{
    int i;

    for ( i = 0; i < 6; ++i){
        s[i]=m1[i];
    }
}

void sci1::set_up_m(string m2)
{
    int i;
    int len_m2;
    int temp1;
    
    len_m2 = m2.length();
    
    for ( i = 0; i < len_m2; ++i){
        if (m2[i]== 'E'){
            temp1 =s[3];
            s[3] = s[5];
            s[5] = s[2];
            s[2] = s[0];
            s[0] = temp1;
            //cout << m2[i] <<endl;
        }else if (m2[i]== 'W'){
            temp1 =s[2];
            s[2] = s[5];
            s[5] = s[3];
            s[3] = s[0];
            s[0] = temp1;
            //cout << m2[i] <<endl;
        }else if (m2[i]== 'S'){
            temp1 =s[0];
            s[0] = s[4];
            s[4] = s[5];
            s[5] = s[1];
            s[1] = temp1;
            //cout << m2[i] <<endl;
        }else if (m2[i]== 'N'){
            temp1 =s[0];
            s[0] = s[1];
            s[1] = s[5];
            s[5] = s[4];
            s[4] = temp1;
            //cout << m2[i] <<endl;
        }
    }
    //cout << s[0] <<endl;
    /*
    for ( i = 0; i < len_m2 ; ++i){
        cout << m2[i] << endl;
    }
    */
    //hougaku = m2[0];
}

void sci1::m_print()
{
    int i;
  
    /*
    for ( i = 0; i < 6 ; ++i){
        cout << s[i] << endl;
    }
    */
    cout << s[0] << endl;
}

int main(){
    int i;
    int m[6];
    string hougaku1;
    
    for ( i = 0; i < 6; ++i){
        cin >> m[i];
    }
    cin >> hougaku1;
   
    sci1 saikoro1;
    
    saikoro1.set_scikoro(m);
    saikoro1.set_up_m(hougaku1);
    saikoro1.m_print();
    
    return 0;
}