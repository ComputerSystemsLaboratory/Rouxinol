#include <iostream>
using namespace std;
int main(){
                int students[40]={1};
                for( int i=0 ; i<30 ; i++ )
                        students[i]=1;
                for( int i=0 ; i<28 ; i++ ){
                        int tmp;
                        cin >> tmp;
                        students[tmp-1]=0;
                }
                for( int i=0 ; i<30 ; i++ ){
                        if(students[i]!=0)
                                cout << i+1 << endl;
                }
                return 0;
}