#pragma once

#include <iostream>

template <typename A, typename L, typename F>

void iter(A *array, L _length, F _function) {
    for (L i = 0; i < _length; i++) {
        _function(array[i]);
    }
}