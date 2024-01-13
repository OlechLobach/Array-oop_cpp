#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;

class Array {
public:
    Array();
    Array(int size);
    ~Array();

    int& operator[](int index);
    void operator()(int increment);
    operator int() const;
    operator const char* () const;

private:
    int size;
    int* elements;
};

#endif