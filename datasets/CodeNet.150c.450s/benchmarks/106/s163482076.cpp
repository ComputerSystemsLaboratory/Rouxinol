#include <iostream>
using namespace std;

int main()
{
    int a[10000], b, c, num=0;
    int i, j;
    cin >>a[0] >>b >>c;

    if(a[0]<=b){
      for(i=0; a[i]< b; i++){
        a[i+1]=a[i]+1;
      }

      for(j=0; j<=i; j++){
        if(c%a[j] == 0){
            num++;
          }
      }
      cout <<num <<endl;
    }
}