#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int **table;
    table=(int **)malloc(sizeof(int *)*r);
    if (table==NULL){
        cout<<"Error!"<<endl;
        return -1;
    }
    int i,j;
    for (i=0;i<r;i++){
        table[i]=(int *)malloc(sizeof(int)*c);
        if (table[i]==NULL){
            cout<<"Error!"<<endl;
            return -1;
        }
        for (j=0;j<c;j++){
            cin>>table[i][j];
        }
    }
    int sum;
    for (i=0;i<r;i++){
        sum=0;
        for (j=0;j<c;j++){
            cout<<table[i][j]<<" ";
            sum+=table[i][j];
        }
        cout<<sum<<endl;
    }
    int sum2=0;
    for (i=0;i<c;i++){
        sum=0;
        for (j=0;j<r;j++){
            sum+=table[j][i];
        }
        cout<<sum<<" ";
        sum2+=sum;
    }
    cout<<sum2<<endl;
    for (i=0;i<r;i++){
        free(table[i]);
    }
    free(table);
    return 0;
}