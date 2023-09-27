#include<cstdio>
#include<vector>

using namespace std;

char input[30000];
vector<int> res, resr;

char *p;

int sur(void) {
    int d=1,res=1;

    for(p++; *p && d; p++) {
        switch(*p) {
            case '\\':
                d++;
                break;
            case '/':
                d--;
                break;
            case '_':
                break;
        }
        res += d;
    }
    if(d) return -1;
    return res;
}
int surr(void) {
    int d=1,res=1;

    for(p--; *p && d; p--) {
        switch(*p) {
            case '\\':
                d--;
                break;
            case '/':
                d++;
                break;
            case '_':
                break;
        }
        res += d;
    }
    if(d) return -1;
    return res;
}

int main(void) {
    int sum=0;

    scanf("%s", input);

    p = input;

    char *last=p;
    while(true){
        while(*p && (*p++ != '\\'));
        if(!*p) break;
        p--;

        int r=sur();
        if(r==-1) break;
        last=p;
        res.push_back(r);
    }
    p--;
    while(true){
        while(*p && (*p-- != '/'));
        if(!*p || p<last) break;
        p++;

        int r=surr();
        if(p<last) break;
        resr.push_back(r);
    }

    for(vector<int>::iterator it = res.begin(); it != res.end(); it++)
        sum += *it;
    for(vector<int>::iterator it = resr.begin(); it != resr.end(); it++)
        sum += *it;
    printf("%d\n", sum);

    printf("%d", res.size() + resr.size());
    for(vector<int>::iterator it = res.begin(); it != res.end(); it++)
        printf(" %d", *it);
    for(vector<int>::reverse_iterator it = resr.rbegin(); it != resr.rend(); it++)
        printf(" %d", *it);
    printf("\n");

    return 0;


}