#include <iostream>
using namespace std;

int main()
{
    int numbersArrays[5];
    int *pPointer = nullptr;

    // assign the address to the first elements to the pointer
    pPointer = numbersArrays;

    *pPointer = 10; // assign a value to the first element

    /*increment the pointer using pointer arithmetic
    to assign the address of the second element to the pointer*/
    pPointer++;
    *pPointer = 20; // assign a value to the second element

    /*assign the address of the third element to the pointer*/
    pPointer = &numbersArrays[2];
    *pPointer = 30; // assign a value to the third element

    /*assign the address of the fourth element to the pointer
     using pointer arithmetic*/
    pPointer = numbersArrays + 3;
    *pPointer = 40; // assign a value to the fourth element

    // assign the address to the first element to the pointer
    pPointer = numbersArrays;

    return 0;
}