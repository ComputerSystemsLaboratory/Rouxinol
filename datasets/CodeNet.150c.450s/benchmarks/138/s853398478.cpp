#include <bits/stdc++.h>

int gcd(int a,int b){
if(a == b) return a;
int temp = a-b;
if(temp < b) std::swap(temp,b);
return gcd(temp,b);
}


int main(){
int a,b;
std::cin >> a >> b;
if(a < b) std::swap(a,b);
std::cout << gcd(a,b) << std::endl; 
}