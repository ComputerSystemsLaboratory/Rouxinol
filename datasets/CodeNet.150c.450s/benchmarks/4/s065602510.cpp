#include<iostream>
using namespace std;
int main(){
   int m,n,r;
   while(true){
       cin >> m >> n >> r;
       if(m == -1 && n ==-1 && r == -1)break;
       
       if(m == -1 || n == -1 || m+n<30){
           cout << "F" << endl;
       }else if(80<=(m+n))cout << "A" << endl;
        else if(65<=(m+n))cout << "B" << endl;
        else if(50<=(m+n) || (m+n>=30 && r>=50))cout << "C" << endl;
        else if(30<=(m+n))cout << "D" << endl;
        else if(m+n<30)cout << "F" << endl; 
       
   }
}
