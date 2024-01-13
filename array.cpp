#include "Array.h"


Array::Array() : size(0), elements(nullptr) {}

Array::Array(int size) : size(size) {
    elements = new int[size];
    for (int i = 0; i < size; ++i) {
        elements[i] = 0;
    }
}

Array::~Array() {
    delete[] elements;
}

int& Array::operator[](int index) {
    if (index >= 0 && index < size) {
        return elements[index];
    }
    throw out_of_range("Index out of bounds");
}

void Array::operator()(int increment) {
    for (int i = 0; i < size; ++i) {
        elements[i] += increment;
    }
}

Array::operator int() const {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += elements[i];
    }
    return sum;
}

Array::operator const char* () const {
    stringstream ss;
    for (int i = 0; i < size; ++i) {
        ss << elements[i] << " ";
    }
    string result = ss.str();
    char* cstr = new char[result.size() + 1];
    strcpy_s(cstr, result.size() + 1, result.c_str());
    return cstr; 
}