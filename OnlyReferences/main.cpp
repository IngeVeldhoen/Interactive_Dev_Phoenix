#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int nValue = 5;
    //this is a value holding an address. it always acts like a dereference pointer
    int &rnValue = nValue;
    // declaring a pointer and setting it equal to the adress of nValue;
    int *pntr = &nValue;
    cout << "i'm a reference to nValue " << rnValue << " I am the pointer adress of nValue "<< pntr;
    return 0;

    int holder = 0;
    cin >> holder;
}
