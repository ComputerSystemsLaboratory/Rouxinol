#include <iostream>
#include <algorithm>

int main(){
 int array[3];
 std::cin >> array[0] >> array[1] >> array[2];
 std::sort(array, array+3);

 std::cout << array[0] << " " << array[1] << " " << array[2] << std::endl;

}