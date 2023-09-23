#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    int count = 0;
    int i;
    cin >> a >> b >> c;
   
    for(i=0; i<= b-a; i++){
       if(c%(a+i) == 0){
           count+= 1;
       }
    }
    cout << count << endl;
    return 0;
}

