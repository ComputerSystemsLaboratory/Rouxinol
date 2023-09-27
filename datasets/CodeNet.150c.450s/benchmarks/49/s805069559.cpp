#include <iostream>

int main()
{

    while(1) {
        int judgeNum = 0;
        int pointSum = 0;
        int maximumPoint = 0;
        int minimumPoint = 1000;

        std::cin >> judgeNum;
        if (judgeNum == 0) {
            break;
        }

        for(int i = 0; i < judgeNum; i++) {
            int point;
            std::cin >> point;
            if(point > maximumPoint) {
                maximumPoint = point;
            }

            if (point < minimumPoint) {
                minimumPoint = point;
            }
            pointSum += point;
        }

        int answerSum = pointSum - maximumPoint - minimumPoint;

        std::cout << answerSum / (judgeNum - 2) << std::endl;
    }
    return 0;
}