#include <cstdio>
#include <iostream>
#include <vector>

int counter = 0;

void solve(std::vector<int>& data1, std::vector<int>& data2)
{
    for(int i = 0; i < data2.size(); i++) {
        for(int j = 0; j < data1.size(); j++) {
            if(data2[i] == data1[j]) {
                counter++;
                break;
            }
        }
    }
}

int main()
{
    int first_sequence_size, second_sequence_size;
    std::cin >> first_sequence_size;
    std::vector<int> first_sequence(first_sequence_size);
    for(int i = 0; i < first_sequence.size(); i++) {
        std::cin >> first_sequence[i];
    }
    std::cin >> second_sequence_size;
    std::vector<int> second_sequence(second_sequence_size);
    for(int i = 0; i < second_sequence.size(); i++) {
        std::cin >> second_sequence[i];
    }
    solve(first_sequence, second_sequence);

    printf("%d\n", counter);
}