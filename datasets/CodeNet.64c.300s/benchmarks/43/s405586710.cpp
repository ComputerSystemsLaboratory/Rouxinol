#include <iostream>

using namespace std;

int main(void){
int asum = 0,bsum = 0;
for(int i  = 0;i < 4;i++){
int x;
cin >> x;
asum += x;
}
for(int i = 0;i < 4;i++){
int x;
cin >> x;
bsum += x;
}
cout << max(asum,bsum) << endl;
return 0;
}