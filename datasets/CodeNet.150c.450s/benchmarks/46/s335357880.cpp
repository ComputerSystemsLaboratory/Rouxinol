#include <iostream>
using namespace std;
int main(void){
int a=0,b=0,g=0;
while(1){
    int l=0;
    cin>>a>>b;
    if(a==0&&b==0)break;
for ( int i = 1;i <=a;i++ ) {
    for (int j = i+1;j <=a;j++ ) {
        for (int k = j+1;k <=a;k++ ) {
          g = i+j+k;  
      if(g==b)
    l++;
        }
    }
}
cout<<l<<endl;
}

}

