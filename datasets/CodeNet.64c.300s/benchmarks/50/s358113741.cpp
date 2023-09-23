#include <iostream>

using namespace std;

int main()
{
	int count;
    cin>>count;
    
    int* list  = new int[count];
    for(int x = 0; x<count; x++){
        cin>>list[x];
    }
    
    //  start sorting;
    int sum = 0;
    
    for(int i = 0; i< count; i++){
        for(int j = count-1;j>i;j--){
            if(list[j-1]>list[j]){
                int temp = list[j];
                list[j] = list[j-1];
                list[j-1] = temp;
                sum++;
            }
        }
    }
    
    for(int x = 0;x < count;x++){
        cout<<list[x];
        if(x!= count-1){
            cout<<' ';
        }
    }
    cout<<endl;
    
    cout<<sum<<endl;
    
	return 0;
}