#include <iostream>
#include <vector>


const int kLargestNumberPlusOne = 1000000000 + 1;


void swap(std::pair<char, int>& a, std::pair<char, int>& b) {
    std::pair<char, int> tmp = a;
    a = b;
    b = tmp;
}


//tail_index??????????????????????´????????????¨???????????????????°???????????´?????????´?????°??????
//?????????????????????????????¨?????????????????????????????????????????????????????????
int partition(std::vector<std::pair<char, int> >& array, int head_index, int tail_index) {
    int standard = array[tail_index].second;
    //?????´????°?????????°?????????????????¶????????????????????????
    //????????????????????????????¬????????´??????\?????´???
    int tail_of_smallers = head_index;
    for(int i = head_index; i < tail_index; i++) {
        if(array[i].second <= standard) {
            swap(array[i], array[tail_of_smallers]);
            tail_of_smallers++;
        }
    }
    swap(array[tail_of_smallers], array[tail_index]);
    return tail_of_smallers;
}


void quick_sort(std::vector<std::pair<char, int> >& array, int head_index, int tail_index) {
    if(head_index >= tail_index)
        return;
    int boundary_index = partition(array, head_index, tail_index);
    quick_sort(array, head_index, boundary_index - 1);
    quick_sort(array, boundary_index + 1, tail_index);
}


void merge(std::vector<std::pair<char, int> >& array, int head_index, int boundary_index, int tail_index) {
    std::vector<std::pair<char, int> > front_buffer(boundary_index - head_index);
    for(int i = head_index; i < boundary_index; i++)
        front_buffer[i - head_index] = array[i];
    std::pair<char, int> sentinel('X', kLargestNumberPlusOne);
    front_buffer.push_back(sentinel);

    std::vector<std::pair<char, int> > back_buffer(tail_index - boundary_index);
    for(int i = boundary_index; i < tail_index; i++)
        back_buffer[i - boundary_index] = array[i];
    back_buffer.push_back(sentinel);

    auto front_buffer_iter = front_buffer.begin();
    auto back_buffer_iter = back_buffer.begin();
    for(int i = head_index; i < tail_index; i++) {
        if(front_buffer_iter->second <= back_buffer_iter->second) {
            array[i] = *front_buffer_iter;
            front_buffer_iter++;
        } else {
            array[i] = *back_buffer_iter;
            back_buffer_iter++;
        }
    }
}


void merge_sort(std::vector<std::pair<char, int> >& array, int head_index, int tail_index) {
    if(tail_index - head_index <= 1)
        return;
    int boundary_index = (head_index + tail_index) / 2;
    merge_sort(array, head_index, boundary_index);
    merge_sort(array, boundary_index, tail_index);
    merge(array, head_index, boundary_index, tail_index);
}


bool is_stable(const std::vector<std::pair<char, int> >& first_array,
               const std::vector<std::pair<char, int> >& second_array) {
    if(first_array.size() != second_array.size())
        return false;
    for(int i = 0; i < first_array.size(); i++) {
        if(first_array[i] != second_array[i])
            return false;
    }
    return true;
}


int main() {
    int input_size;
    std::cin >> input_size;
    std::vector<std::pair<char, int> > array(input_size);
    for(auto& item : array)
        std::cin >> item.first >> item.second;
    auto buffer = array;
    quick_sort(array, 0, input_size - 1);
    merge_sort(buffer, 0, input_size);

    //for(const auto& x : buffer)
    //    std::cout << x.first << ' ' << x.second << std::endl;

    if(is_stable(array, buffer))
        std::cout << "Stable" << std::endl;
    else
        std::cout << "Not stable" << std::endl;

    for(const auto& item : array)
        std::cout << item.first << ' ' << item.second << std::endl;

    return 0;
}