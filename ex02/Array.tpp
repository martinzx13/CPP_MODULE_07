#pragma once

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _size(0), _array(new T[0]){
}

template <typename T>
Array<T>::Array(unsigned int n):_size(n) {
    _array = new T[_size];
}

template <typename T>
Array<T>::~Array(){
    delete[] _array;
}

template <typename T>
Array<T>::Array(Array const &src): _size(src._size), _array(new T[src._size]) {
    for (unsigned int i = 0; i < _size; ++i) {
        _array[i] = src._array[i];
    }
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &src) {
    if (this != &src) {

        T *newArr = new T[src._size];
        for (unsigned int i = 0; i < _size; ++i) {
            newArr[i] = src._array[i];
        }
        delete [] _array;
        _array = newArr;
        _size = src._size;
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int i) {
    if (i >= _size) {
        throw std::out_of_range("Index out of range");
    }
    return _array[i];
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}