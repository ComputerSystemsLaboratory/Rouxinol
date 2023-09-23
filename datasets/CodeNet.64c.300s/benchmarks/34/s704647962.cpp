#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	//  implement insertion sort
    //  output every result along each step
    int count;
    cin>>count;
    
    int *list = new int[count];
    for(int i =0;i<count;i++){
        cin>>list[i];
    }
    
    for(int k = 0;k<count;k++){
            cout<<list[k];
            if(k!=count-1){
                cout<<' ';
            }
        }
        cout<<endl;
    
    for(int i = 1;i<count;i++){
        int temp = list[i];
        int pos = i;
        for(int j = i-1;j>=0&&temp<list[j];j--){
                list[j+1] = list[j];
                pos = j;
        }
        list[pos] = temp;
        
        for(int k = 0;k<count;k++){
            cout<<list[k];
            if(k!=count-1){
                cout<<' ';
            }
        }
        cout<<endl;
    }
    
    delete[] list;
	return 0;
}