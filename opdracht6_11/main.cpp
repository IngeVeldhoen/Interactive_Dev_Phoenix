#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    struct Something
{
    int nValue;
    float fValue;
    //cout << fValue << endl;
};

struct Other
{
    Something sSomething;
    int nOtherValue;
   // cout << nOtherValue << endl;
   // cout << sSomething << endl;
};

Other sOther;


cout << " la la la " << endl;
    return 0;
}
