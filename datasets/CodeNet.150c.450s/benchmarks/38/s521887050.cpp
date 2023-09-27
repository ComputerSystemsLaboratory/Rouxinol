#include<iostream>
using namespace std;

int main(){

int tri[1000][3];
int num = 0;
cin >> num;
for(int i = 0;i<num;i++)
cin >> tri[i][0] >> tri[i][1] >> tri[i][2];

long int a,b,c=0;

for(int i = 0;i<num;i++){
a = tri[i][0]*tri[i][0];
b = tri[i][1]*tri[i][1];
c = tri[i][2]*tri[i][2];
if(a == b+c || b == a+c || c == a + b)
cout << "YES\n";
else
cout << "NO\n";
}
    return 0;
}