#include <cstdio>
#include <iostream>
#include <utility>
#include <vector>
#include <string>

void bubblesort(std::vector<std::pair<char, int> > &array)
{
    std::pair<char, int> tmp;

    for (int i = 0; i < array.size(); i++) {
        for (int j = array.size() - 1; j > i; j--) {
            if (array[j].second < array[j - 1].second) {
                tmp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = tmp;
            }
        }
    }
}

void selectionsort(std::vector<std::pair<char, int> > &array)
{
    for (int i = 0; i < array.size(); i++) {
        int min_index = i;
        for (int j = i; j < array.size(); j++) {
            if (array[j].second < array[min_index].second)
                min_index = j;
        }

        std::pair<char, int> tmp = array[i];
        array[i] = array[min_index];
        array[min_index] = tmp;
    }
}

bool isstable(std::vector<std::pair<char, int> > &stable, std::vector<std::pair<char, int> > &array)
{
    for (int i = 0; i < array.size(); i++) {
        if (stable[i].first != array[i].first)
            return false;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    // for bubble sort
    std::vector<std::pair<char, int> > vb(n);
    std::string input;

    for (int i = 0; i < n; i++) {
        std::cin >> input;
        vb[i].first = input[0];
        vb[i].second = input[1] - '0';
    }

    // for selection sort
    std::vector<std::pair<char, int> > vs = vb;

    bubblesort(vb);
    for (int i = 0; i < n - 1; i++) {
        std::cout << vb[i].first << vb[i].second << " ";
    }
    std::cout << vb[n - 1].first << vb[n - 1].second << std::endl;
    // bubble sort is known stable
    std::cout << "Stable" << std::endl;

    selectionsort(vs);
    for (int i = 0; i < n - 1; i++) {
        std::cout << vs[i].first << vs[i].second << " ";
    }
    std::cout << vs[n - 1].first << vs[n - 1].second << std::endl;

    // judge stability
    if (isstable(vb, vs))
        std::cout << "Stable" << std::endl;
    else
        std::cout << "Not stable" << std::endl;

    return 0;
}