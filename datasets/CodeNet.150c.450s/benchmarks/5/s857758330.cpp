#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int count;
    cin>>count;
    
    int* list = new int[count];
    for(int i=0;i<count;i++){
        int temp;
        cin>>temp;
        list[i] = temp;
    }
    
    for(int j =0;j<count;j++){
        cout<<list[count-j-1];
        if(j!=(count-1)){
            cout<<' ';
        }
    }
    cout<<endl;
    delete list;
	return 0;
}