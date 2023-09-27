#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int r,c;
    cin >> r >> c;
    int a[r][c];
    int i,j,k,s;

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            a[i][j] = 0;
        }
    }
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> a[i][j];
        }
    }

    for(i=0;i<r+1;i++){
        if(i!=r){
            for(j=0;j<c+1;j++){
                if(j==c){
                    int result = 0;
                    for(k=0;k<c;k++){
                       result += a[i][k];
                    }
                    cout <<  result << endl;
                }
                else{
                    cout << a[i][j] << " ";
                }
            }
        }
        else{
            for(j=0;j<c+1;j++){
                if(j!=c){
                    int result = 0;
                    for(k=0;k<r;k++){
                        result += a[k][j];
                    }
                    cout << result << " ";
                }
                else{
                    int result = 0;
                    for(k=0;k<r;k++){
                        for(s=0;s<c;s++){
                            result += a[k][s];
                        }
                    }
                    cout << result << endl;
                }
            }
        }
    }
    return 0;
}

