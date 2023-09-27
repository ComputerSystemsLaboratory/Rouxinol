#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
     string taroCard, hanakoCard;;
     int count, taroScore = 0, hanakoScore = 0;
     cin >> count;

     for (int i = 0; i < count; i++) {
         cin >> taroCard >> hanakoCard;
         if (taroCard > hanakoCard) {
             taroScore += 3;
         } else if (taroCard == hanakoCard) {
             taroScore += 1;
             hanakoScore += 1;
         } else {
             hanakoScore += 3;
         }
     }

     printf("%d %d\n", taroScore, hanakoScore);
}