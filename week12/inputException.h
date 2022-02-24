#pragma once
#include <iostream>
#include <exception>

#define clearstream cin.ignore(100, '\n')

template <class T>
T inputException(T, T);
template <class T>
T inputException();
#include "inputException_impl.h"