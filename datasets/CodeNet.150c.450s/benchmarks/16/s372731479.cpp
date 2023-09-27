#include <iostream>
#include <stack>
#include <vector>

using namespace std;

typedef struct 
{
    unsigned int left;
    unsigned int area;
}AreaInfo_t;

#define CalcArea(x,y) ((x) - (y))

stack<unsigned int> ArealeftIdxStack;
vector<AreaInfo_t> AreaInfoStack;

int Decision(char, unsigned int);
void Fusion(AreaInfo_t);
void PrintArea(void);

int main(void){
    char ch;
    unsigned int idx = 0;
    unsigned int total = 0;
    
    while(cin >> ch)
    {
        total += Decision(ch, idx);
        idx++;
    }
    
    cout << total << endl;
    PrintArea();
    
    return 0;
    
}

int Decision(char ch, unsigned int idx)
{
    switch(ch)
    {
        case '\\':
            ArealeftIdxStack.push(idx);
            break;
        case '/':
            if(ArealeftIdxStack.empty())
            {
                break;
                
            }
            AreaInfo_t area;
            area.left = ArealeftIdxStack.top();
            area.area = CalcArea(idx, ArealeftIdxStack.top());
            Fusion(area);
            ArealeftIdxStack.pop();
            return area.area;
        case '_':
            // pass
            break;
        default:
            return 0;
    }

    return 0;
}

void Fusion(AreaInfo_t tInfo)
{
    
    while(1)
    {
        if(AreaInfoStack.empty())
        {
            AreaInfoStack.push_back(tInfo);
            break;
        }
        
        AreaInfo_t tmp = AreaInfoStack.back();
        if(tmp.left > tInfo.left)
        {
            tInfo.area += tmp.area;
            AreaInfoStack.pop_back();
        }
        else
        {
            AreaInfoStack.push_back(tInfo);
            break;
        }
    }
    return;
}

void PrintArea()
{
    cout << AreaInfoStack.size();
    for(vector<AreaInfo_t>::iterator it = AreaInfoStack.begin(); it != AreaInfoStack.end(); it++)
    {
        cout << ' ' <<  it->area;
    }
    cout << endl;

    return;
}

