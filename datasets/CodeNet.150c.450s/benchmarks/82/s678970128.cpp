#include<iostream>
#include<string>
using namespace std;

struct dise{
 int lab1, lab2, lab3, lab4, lab5, lab6;
};

int main(){
 dise d2;
 cin >> d2.lab1 >> d2.lab2 >> d2.lab3 >> d2.lab4 >> d2.lab5 >> d2.lab6;

 int q;
 cin >> q;
 int top, front;
 for( int j=0; j<q; j++ ){
   cin >> top >> front;
   if( top==d2.lab3 || top==d2.lab4 ){
     int tmp = d2.lab1;
     d2.lab1 = d2.lab4;
     d2.lab4 = d2.lab6;
     d2.lab6 = d2.lab3;
     d2.lab3 = tmp;
   }
   while( top!=d2.lab1 ){
     int tmp = d2.lab1;
     d2.lab1 = d2.lab2;
     d2.lab2 = d2.lab6;
     d2.lab6 = d2.lab5;
     d2.lab5 = tmp;
   }
   while( front!=d2.lab2 ){
     int tmp = d2.lab2;
     d2.lab2 = d2.lab3;
     d2.lab3 = d2.lab5;
     d2.lab5 = d2.lab4;
     d2.lab4 = tmp;
   }

 cout << d2.lab3 << endl;
 }

 return 0;
}
