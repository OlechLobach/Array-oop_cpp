#include "Array.h"
#include <iostream>

int main() {
    Array arr(5);

    
    arr[2] = 10;
    cout << "Element at index 2: " << arr[2] << endl;

    
    arr(5); 

   
    int sum = arr;
    cout << "Sum of array elements: " << sum << endl;

    const char* str = arr;
    cout << "Array elements as string: " << str << endl;

   
    delete[] str;

    return 0;
}