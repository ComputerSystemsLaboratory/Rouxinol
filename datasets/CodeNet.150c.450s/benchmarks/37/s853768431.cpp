#include <bits/stdc++.h>
using namespace std;
 
int main() {
double a,b,c,d,e,f;
while(cin >> a >> b >> c >> d >> e >> f) {
printf("%.3f ",(e * c - b * f) / (a * e - b * d) + 0.0);
printf("%.3f\n",(a * f - d * c) / (a * e - b * d) + 0.0);
}
return 0;
}