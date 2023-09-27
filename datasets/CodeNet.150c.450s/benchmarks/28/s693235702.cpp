#include <functional>
#include <sstream>
#include <math.h>
#include <vector>
#include <iostream>
#include <limits>

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_D&lang=jp

using namespace std;

void parseInputs(istream &ist, int &outNumPacks, int &outNumTrucks, int &outSumWeights, vector<int> &outWeights);
int calculateEnoughBigSize(int numTrucks, int sum, const vector<int> &weights);
bool isGoodSize(int size, int numTrucks, const vector<int> &weights);
int doBinaryStep(int &inOutLow, int &inOutHigh, const function<bool(int)> &condition);

int main()
{
    int numPacks;
    int numTrucks;
    vector<int> weights;
    int sum;
    parseInputs(cin, numPacks, numTrucks, sum, weights);
    /*
    numPacks = 4;
    numTrucks = 2;
    weights = {1, 2, 2, 6};
    sum = 11;

    numPacks = 5;
    numTrucks = 3;
    weights = {8, 1, 7, 3, 9};
    sum = 8 + 1 + 7 + 3 + 9;
    */
    int tooSmall = sum / numTrucks - 1; // 載積量の下限 // falseの方にすること
    int enoughBig = calculateEnoughBigSize(numTrucks, sum, weights);
    function<bool(int)> condition = [numTrucks, &weights](int size) -> bool {
        return isGoodSize(size, numTrucks, weights);
    };
    while (doBinaryStep(tooSmall, enoughBig, condition) == numeric_limits<int>::lowest())
    {
    }
    cout << enoughBig << endl;
    return 0;
}

void parseInputs(istream &ist, int &outNumPacks, int &outNumTrucks,
                 int &outSumWeights, vector<int> &outWeights)
{
    ist >> outNumPacks >> outNumTrucks;
    outSumWeights = 0;
    for (int i = 0; i < outNumPacks; i++)
    {
        int w;
        ist >> w;
        outWeights.push_back(w);
        outSumWeights += w;
    }
}

int calculateEnoughBigSize(int numTrucks, int sum, const vector<int> &weights)
{
    float average = sum / numTrucks;
    int p = numeric_limits<int>::lowest();
    int tempP = 0;
    for (int w : weights)
    {
        tempP += w;
        if (tempP >= average)
        {
            p = max(p, tempP);
            tempP = 0;
        }
    }
    return max(p, tempP);
}

bool isGoodSize(int size, int numTrucks, const vector<int> &weights)
{
    int numLeftTrucks = numTrucks;
    int buffer = 0;
    for (int w : weights)
    {
        if (buffer + w > size)
        {
            numLeftTrucks--;
            if (numLeftTrucks <= 0)
            {
                return false;
            }
            if (size < w)
            {
                return false;
            }
            buffer = w;
        }
        else
        {
            buffer += w;
        }
    }
    return true;
}

// @returm 結果が得られたら結果(condition=trueとなる最小の値)、そうではないときはINT_NIN
int doBinaryStep(int &inOutLow, int &inOutHigh, const function<bool(int)> &condition)
{
    if (inOutHigh - inOutLow <= 1)
    {
        return inOutHigh;
    }
    int test = test = (inOutLow + inOutHigh) / 2;
    if (condition(test))
    {
        inOutHigh = test;
    }
    else
    {
        inOutLow = test;
    }
    return numeric_limits<int>::lowest();
}
