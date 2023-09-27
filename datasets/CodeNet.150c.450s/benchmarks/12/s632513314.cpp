#include <iostream>
using namespace std;

void printNodeInfo(int* array, int index, int num_elem)
{
    cout << "node " << index+1 << ": key = " << array[index] << ", ";
    if(index != 0)
    {
        cout << "parent key = " << array[(index - 1) / 2] << ", ";
    }
    if(2 * index + 1 < num_elem)
    {
        cout << "left key = " << array[2 * index + 1] << ", ";
    }
    if(2 * index + 2 < num_elem)
    {
        cout << "right key = " << array[2 * index + 2] << ", ";
    }
    cout << endl;
}

int main()
{
    int n, array[250];
    cin >> n;
    for(int i=0;i<n;++i)
    {
        cin >> array[i];
    }

    for(int i=0;i<n;++i) printNodeInfo(array, i, n);
}

