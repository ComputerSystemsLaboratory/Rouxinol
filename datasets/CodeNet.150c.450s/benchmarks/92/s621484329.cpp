#include <iostream>
#include <string>   
using namespace std;
 
int main(){
int a[2],b,c = 1;
;

while(cin >> a[0] >> a[1]){
b = a[0] + a[1];	
while(b >= 10){
	b = b/10;
	c++;
}
cout<<c<<endl;
c = 1;
}

}