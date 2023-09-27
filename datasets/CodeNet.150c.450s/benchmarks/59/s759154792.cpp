//
//  Insertion Sort
//

#include <iostream>
using namespace std;

/*
 函数模板: CPP 中支持两种模板, 函数模板和类模板, 顾名思义, 此处就是
 生成函数的模板; 它的写法是(class 关键字可以被替换成 typename)
 template <class 类型参数1, class 类型参数2, ...>
 返回值类型 模板名(形参表)
 {
    函数体
 }
 */
template <class T>
void printArray(T Array, int size)
{
    for (int i = 0; i < size; i++) {
        cout << Array[i];
        if (i != size - 1) cout << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cin >> size;
    int array[size];

    int i = 0;
    while(i < size) {
        cin >> array[i];
        i++;
    }
    
    printArray(array, size);
    // Insertion Sort
    for (int i = 1; i < size; i++) {
        int v = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > v) {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = v;
        // print out each step result
        printArray(array, size);
    }

    return 0;
}

