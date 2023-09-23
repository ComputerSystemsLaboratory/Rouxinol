#include<iostream>
using namespace std;
int main(){
    //??????
    int matrix[100][100];
    int b_vector[100];
    int c_vector[100];
    int n,m;

    
    //??\???
    cin>>n>>m;
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>matrix[i][j];
        }
    }
    for (int i = 0; i < m ; ++i) {
        cin>>b_vector[i];
    }

    //?????????
    for (int i = 0; i < n ; ++i) {
        int sum = 0;
        for (int j = 0; j < m; ++j) {
            sum += matrix[i][j]*b_vector[j];
        }
        c_vector[i] =  sum;
    }

    //??????
    for (int i = 0; i < n ; ++i) {
    cout<<c_vector[i]<<endl;
    }
}