#include "alt.h"
#include <iostream>
#ifndef AQUE_H
#define AQUE_H
using namespace std;
template <class Object>
class aque : public alt<Object>
/*
 * based on alt
 *
 *
 */
{
 public:
    aque(Object object);
    void push(Object object);
    Object pop_out();
    Object pop_item();
};
#endif
