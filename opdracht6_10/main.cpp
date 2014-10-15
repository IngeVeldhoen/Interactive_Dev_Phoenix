#include <iostream>

using namespace std;

int main()
{
    int nValue = 5;
int nValue2 = 6;

const int *pnPtr = &nValue;
pnPtr = &nValue2; // okay
    return 0;
}
