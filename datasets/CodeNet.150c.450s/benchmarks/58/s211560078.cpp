#include <iostream>
#include <stack>

int main()
{

    std::stack<int> hoge;
    std::string word;
    
    while(std::cin >> word)
    {
        
        if (word == "+") {
            //std::cout << word << std::endl;
            int number_1, number_2;
            number_1 = hoge.top();
            hoge.pop();
            number_2 = hoge.top();
            hoge.pop();
            hoge.push(number_1 + number_2);
        } else if (word == "-") {
            //std::cout << word << std::endl;
            int number_1, number_2;
            number_1 = hoge.top();
            hoge.pop();
            number_2 = hoge.top();
            hoge.pop();
            hoge.push(number_2 - number_1);
            
        } else if (word == "*") {
            //std::cout << word << std::endl;
            int number_1, number_2;
            number_1 = hoge.top();
            hoge.pop();
            number_2 = hoge.top();
            hoge.pop();
            hoge.push(number_1 * number_2);

        } else {

            //std::cout << word << std::endl;
            hoge.push(std::stoi(word));
        }
    
    }
    
    std::cout << hoge.top() << std::endl;
    return 0;
    
}