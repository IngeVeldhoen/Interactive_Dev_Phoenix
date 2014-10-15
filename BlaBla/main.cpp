#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int nValue = 5;

    int *pnPtr = &nValue;

    int nValue2 = 8;
    pnPtr = &nValue2;

    float example = 10.0;

    float *mysteryPointer = &example;
    // dereferencing pointer o nothing > crash , don't know yet > make it 0
    // * Astrix (makes it know it's pointer, &address of operator, adresses to variable



    cout << "nValue is" << nValue << "&nValue is" << &nValue << endl;

    cout << pnPtr << " is the value of pnPtr." << *pnPtr << " is what my pointer is pointing to(nValue)." << endl;

    cout << &nValue << " is the adress of nValue. " << pnPtr << " is the adress the pointer holds. " << endl;

    cout << *pnPtr << " is what the pointer is dereferencing. " << nValue << " is the value of nValue. " << endl;

    int anArray [5] = {1,2,3,4,5};
    cout << *anArray << " is the first element of the array. " << endl;

    cout << *(anArray+1) << " is the second element in the array. " << endl;

    int *const pnPtr3 = &nValue;

    // constant, can't be changed
    // can't do this:
    // pnPtr3 = &nValue2;

    const float num2 = 10;
    const float *pnPtr4 = &num2;
    float num3 = 12;
   float *const pnPtr5 = &num3;

    //this pointer will never change thing it's pointing at

    // this pointer will always point here and never at any other adress and value it is pointing at is constants
    const float *const pnPtr11 = &num3;
    float num5 = 11;
   //not possible: *pnPtr11++;






    int holder = 0;

    cin >> holder;

    return 0;
}
//Pointer: value pointing at adress
//* Astrix, dereferencing




