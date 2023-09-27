#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

const int MAX_N = 110;

int judge_num;
int score[MAX_N];

//---------------------//                                                                                            
int main()
{
        while (cin >> judge_num) {

                if (judge_num == 0) break;

                for(int i = 0; i < judge_num; ++i) {
                        cin >> score[i];
                }

                sort(score, score + judge_num);

                int ave;
                double sum_temp = 0;

                for (int i  = 1; i < judge_num - 1; ++i) {
                        sum_temp += score[i];
                }

                ave = (int)( floor( sum_temp / (judge_num - 2) ) );

                cout << ave << endl;
        }

        return 0;
}