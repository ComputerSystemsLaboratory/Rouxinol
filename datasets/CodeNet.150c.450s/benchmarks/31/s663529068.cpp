
#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
int data_size;
cin >>data_size;
int r[data_size];
for(int i=0;i<data_size;i++)
    cin>> r[i];
     
int min_value=r[0];
int diff_max=-1e9;
for(int j=1;j<data_size;j++){
    if(diff_max<=r[j]-min_value) diff_max=r[j]-min_value;
    if(r[j]<=min_value) min_value=r[j];
}
 
cout<<diff_max<<endl;
return 0;
}