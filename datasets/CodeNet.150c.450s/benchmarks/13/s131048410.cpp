#include <iostream>
#include <string>

int main()
{
    std::string sample = "";
    std::string circle_sample = "";
    std::string word = "";
    bool judge = false;
    int matching = 0;

    std::cin >> sample;
    std::cin >> word;

     circle_sample += sample;
     circle_sample += sample;

    for (int i = 0; i < sample.length(); i++) {
        for (int j = 0; j < word.length(); j++) {
            if (circle_sample[i + j] == word[j])  {
                matching += 1;

                if (matching == word.length()) {
                    judge = true;
                    break;
                }
            } else {
                matching = 0;
                break;
            }
        }
        if (matching == word.length()) {
            judge = true;
            break;
        }

    }

    if (judge == true) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
}