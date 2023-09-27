#include <iostream>
using namespace std;
int main(){
int t;
int c=1;
while(true){
cin >> t;
if(t==0)break;
cout << "Case " << c << ": " << t <<endl;
c++;
}
return 0;
}