#include "alt.h"
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
    aque(Object object)
    {
        push(object);
    }
    void push(Object object)
    {
        this->push_back(object);
    }
    Object pop_out()
    {
        Object first;
        if (this->size() > 0) {
            first= (*this)[0];
            this->del(0);
        }
        return first;
    }
    Object pop_item()
    {
        Object first;
        if (this->size() > 0) { first= (*this)[0]; }
        return first;
    }
};
#endif
