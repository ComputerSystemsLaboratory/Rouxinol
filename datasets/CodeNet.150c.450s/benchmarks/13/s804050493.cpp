#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cctype>
#include <cstdio>
#include<string>
using namespace std;

int main(){
   string s,p;
   cin >> s >> p;
   s=s+s;

   if(s.find(p)!=-1) printf("Yes\n");
   else printf("No\n");

   return 0;
}

