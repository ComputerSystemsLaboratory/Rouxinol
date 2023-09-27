#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <cstdlib>

using namespace std;

string s1[36];
string s2[36];
string no1[9];
string no_bubble[9];
string no_selection[9];

class c_input
{
private:

public:
    void f_input(int n);
    void f_bubble(int n);
    void f_selection(int n);
    void f_input_bubble(int n);
    void f_input_selection(int n);
};

void c_input::f_input(int n)
{
    int i, j;
    string temp1;
    string temp2;
    
    for ( i = 0; i < n; ++i){
        cin >> s1[i];
        
        s2[i] = s1[i];
        
        temp1 = s1[i].substr(1,1);
        temp2 = s1[i].substr(0,1);
        
        for ( j = 0; j < 9; ++j ){
            if (atoi(temp1.c_str()) == j){
                no1[j] = no1[j] + temp2;
            }
        }
    }
    
    for ( j = 0; j < 9; ++j ){
        //cout << no1[j] << endl;
        //cout << no1[j].length() << endl;
    }
}

void c_input::f_bubble(int n)
{
    int i, j;
    int k;
    string temp1;
    string temp2;
    string temp3;
    
    for ( i = 0; i < n; ++i){
        for ( j = n-1; j >= i+1; --j){
            temp2 = s1[j].substr(1,1);
            temp3 = s1[j-1].substr(1,1);
            if (atoi(temp2.c_str()) < atoi(temp3.c_str())){
                temp1 = s1[j];
                s1[j] = s1[j-1];
                s1[j-1] = temp1;
            }
        }
    }
    
    for ( k = 0; k < n; ++k){
        cout << s1[k];
        if( k == n-1){
            cout << endl;
        }else{
            cout << " ";
        } 
    }   
}

void c_input::f_selection(int n)
{
    int i, j;
    int k;
    int min_x;
    string temp1;
    int temp2;
    string temp3;
    string temp4;
    
    temp2 = 0;
    
    for ( i = 0; i < n; ++i){
        min_x = i;
        temp2 = 0;
        for ( j = i; j < n; ++j){
            temp3 = s2[j].substr(1,1);
            temp4 = s2[min_x].substr(1,1);
            if (temp3< temp4){
                min_x = j;
                temp2 = 1;
            }
        }
        if (temp2 == 1){
            temp1 = s2[min_x];
            s2[min_x] = s2[i];
            s2[i] = temp1;
        }
    }
    
    for ( i = 0; i < n; ++i){
        cout << s2[i];
        if( i == n-1){
            cout << endl;
        }else{
            cout << " ";
        }        
    }
}

void c_input::f_input_bubble(int n)
{
    int i, j;
    
    string temp1;
    string temp2;
    
    for ( i = 0; i < n; ++i){
        temp1 = s1[i].substr(1,1);
        temp2 = s1[i].substr(0,1);
        
        for ( j = 0; j < 9; ++j ){
            if (atoi(temp1.c_str()) == j){
                no_bubble[j] = no_bubble[j] + temp2;
            }
        }
    }
    
    for ( j = 0; j < 9; ++j ){
        //cout << no_bubble[j] << endl;;
    }
}

void c_input::f_input_selection(int n)
{
    int i, j;
    
    string temp1;
    string temp2;
    
    for ( i = 0; i < n; ++i){
        temp1 = s2[i].substr(1,1);
        temp2 = s2[i].substr(0,1);
        
        for ( j = 0; j < 9; ++j ){
            if (atoi(temp1.c_str()) == j){
                no_selection[j] = no_selection[j] + temp2;
            }
        }
    }
    
    for ( j = 0; j < 9; ++j ){
        //cout << no_selection[j] << endl;;
    }
}

int main(){
    int n;
    int temp1;
    int i;
    
    cin >> n;
    
    c_input input01;
    input01.f_input(n);

    c_input bubble01;
    bubble01.f_bubble(n);
    
    c_input input_bubble01;
    input_bubble01.f_input_bubble(n);
    
    
    
    temp1 = 0;
    for ( i = 0; i < 9; ++i){
        //cout << i << endl;
        if (no1[i] != no_bubble[i]) temp1 = 1;
    }
    
    
    
    if (temp1 == 0){
        cout << "Stable" << endl;
    }else{
        cout << "Not stable" << endl;
    }
    
    c_input selection01;
    selection01.f_selection(n);
    
    c_input input_selction01;
    input_selction01.f_input_selection(n);
    
    temp1 = 0;
    for ( i = 0; i < 9; ++i){
        if (no1[i] != no_selection[i]) temp1 = 1;
    }
    
    if (temp1 == 0){
        cout << "Stable" << endl;
    }else{
        cout << "Not stable" << endl;
    }
    
    return 0;
}