#include <iostream>

using namespace std;

class PriorityQueue
{
    int max_nelem, end;
    int* array;
public:
    PriorityQueue(int n) : max_nelem(n), end(0){
        array = new int[max_nelem];
    }

    void insert(int key)
    {
        int index = end;
        array[end++] = key;
        while(index > 0)
        {
            int parent = (index - 1) / 2;
            if(array[index] > array[parent])
            {
                swap(array[index], array[parent]);
                index = parent;
            }
            else break;
        }
    }

    void maxheapfy(int index)
    {
        int l = 2*index + 1, r = 2*index + 2;
        int largest = index;
        if(l < end && array[l] > array[largest])
        {
            largest = l;
        }
        if(r < end && array[r] > array[largest])
        {
            largest = r;
        }
        if(largest != index)
        {
            swap(array[largest], array[index]);
            maxheapfy(largest);
        }
    }

    int extract()
    {
        //if(end <= 0) raiseError;
        int rvalue = array[0];
        swap(array[0], array[--end]);
        maxheapfy(0);
        return rvalue;
    }
};


int main()
{
    PriorityQueue Q(2000000);
    char com[10];
    int v;
    while(1)
    {
        cin >> com;
        if(com[0] == 'i')
        {
            cin >> v;
            Q.insert(v);
        }
        else
        {
            if(com[1] == 'x')
            {
                v = Q.extract();
                cout << v << endl;
            }
            else break;
        }        
    }
}

