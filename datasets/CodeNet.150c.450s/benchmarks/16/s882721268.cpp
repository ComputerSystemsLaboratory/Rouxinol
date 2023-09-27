#include <iostream>
#include <stack>
#include <vector>

using namespace std;

typedef struct 
{
    unsigned int uiLeft;
    unsigned int uiArea;
}AreaInfo_t;

#define CALC_AREA(x,y) ((x) - (y))

stack<unsigned int> stuiArealeftIdx;
vector<AreaInfo_t> vectAreaInfo;

unsigned int Decision(char, unsigned int);
void Fusion(AreaInfo_t);

int main(void){
    char ch = '\0';
    unsigned int uiIdx = 0;
    unsigned int uiTotal = 0;
    
    while(cin >> ch)
    {
        uiTotal += Decision(ch, uiIdx);
        uiIdx++;
    }
    
    cout << uiTotal << endl;
    cout << vectAreaInfo.size();
    for(vector<AreaInfo_t>::iterator it = vectAreaInfo.begin(); it != vectAreaInfo.end(); it++)
    {
        cout << ' ' <<  it->uiArea;
    }
    cout << endl;
    
    return 0;
    
}

unsigned int Decision(char ch, unsigned int uiIdx)
{
    unsigned int rslt = 0;
    
    switch(ch)
    {
        case '\\':
            stuiArealeftIdx.push(uiIdx);
            break;
        case '/':
            if(!stuiArealeftIdx.empty())
            {
                AreaInfo_t tInfo;
                tInfo.uiLeft = stuiArealeftIdx.top();
                tInfo.uiArea = CALC_AREA(uiIdx, stuiArealeftIdx.top());
                rslt =  tInfo.uiArea;
                stuiArealeftIdx.pop();
                Fusion(tInfo);
            }
            break;
        case '_':
            // pass
            break;
        default:
            // unreachable
            break;
    }

    return rslt;
}

void Fusion(AreaInfo_t tInfo)
{
    
    while(1)
    {
        if(!vectAreaInfo.empty())
        {
            AreaInfo_t tmp = vectAreaInfo.back();
            if(tmp.uiLeft > tInfo.uiLeft)
            {
                tInfo.uiArea += tmp.uiArea;
                vectAreaInfo.pop_back();
                continue;
            }
        }
        vectAreaInfo.push_back(tInfo);
        break;
    }

    return;
}

