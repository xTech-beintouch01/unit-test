// create a unit test to test that the function returns the correct value
// when the input is 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10


#include <iostream>
#include <cassert>
#include "test.h"

using namespace std; 

int main()
{
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(2) == 2);
    assert(factorial(3) == 6);
    assert(factorial(4) == 24);
    assert(factorial(5) == 120);
    assert(factorial(6) == 720);
    assert(factorial(7) == 5040);
    assert(factorial(8) == 40320);
    assert(factorial(9) == 362880);
    assert(factorial(10) == 3628800);
    cout << "All tests passed." << endl;
    return 0;
}


// 'Select IntelliSense Configuration...' command to locate your system headers.

