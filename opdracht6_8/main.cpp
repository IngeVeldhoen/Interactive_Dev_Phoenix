#include <iostream>

using namespace std;

int main()
{
int *pnValue = new int;
*pnValue = 7;
cout << *pnValue <<" pnValue this is . "<< endl;
delete pnValue;
pnValue = 0;

if (pnValue)
    *pnValue = 5;
    return 0;

}
