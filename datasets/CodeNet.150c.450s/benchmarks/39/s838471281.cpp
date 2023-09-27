/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: surai
 *
 * Created on 2016/05/21, 18:51
 */

#include <cstdlib>
#include<iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int a,b;
    cin >> a >> b;
    if((1<=a)&&(b<=100)){
        cout << a*b << " " << a+a+b+b << endl;  
    }
    return 0;
}