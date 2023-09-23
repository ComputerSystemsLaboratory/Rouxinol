#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
 {
     long min,max,a;
     long long sum;
     int n;
     sum = 0;
     cin >> n;

     for (int i = 0; i < n; ++i)
     {
         cin >> a;
         if(i==0) min=a, max=a;
         if(a<min) min = a;
         if(a>max) max = a;
         sum += a;
     }

     cout << min << " " << max << " " << sum << endl;

     return 0;
 }