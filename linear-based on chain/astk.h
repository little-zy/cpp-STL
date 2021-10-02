#include "alt.h"
#ifndef ASTK_H
#define ASTK_H
using namespace std;
template <class Object>
class astk : public alt<Object>
/*
 * based on alt
 *
 */
{
 public:
    astk();
    astk(Object object);
    void push(Object object);
    Object pop_out();
    Object pop_item();
};
#endif
