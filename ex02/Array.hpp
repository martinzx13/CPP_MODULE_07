#pragma once

#include <iostream>

template <typename T>
class Array {
    public:
        Array();
        Array(unsigned int n);
        ~Array();
        Array(Array const & src);
        Array & operator=(Array const & src);
        T & operator[](unsigned int i);
        unsigned int size() const;

    private:
        unsigned int _size;
        T *_array;
};

#include "Array.tpp"
