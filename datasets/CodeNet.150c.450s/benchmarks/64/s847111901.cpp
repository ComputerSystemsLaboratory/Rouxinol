#include<iostream>
#include<vector>
  
using namespace std;
  
int n, q;
vector<bool> isE(2001);
  
int main()
{
    cin>>n;
    int num;
      
    for( int i=0; i<n; i++ ) {
        cin>>num;
        for( int j=2000-num; 0<j; j-- ) {
            if( isE.at( j ) ) {
                isE.at( j+num ) = true;
            }
        }
        isE.at( num ) = true;
    }
    cin>>q;
    for( int i=0; i<q; i++ ) {
        cin>>num;
        if( isE.at( num ) ) {
            cout<<"yes"<<'\n';          
        } else {
            cout<<"no"<<'\n';
        }
    }
    return 0;
}  