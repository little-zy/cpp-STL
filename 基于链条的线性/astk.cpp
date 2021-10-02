#include "astk.h"
#include "alt.h"
using namespace std;
template <class Object>
class astk : public alt<Object>
/*
 * based on alt
 *
 */
{
 public:
    astk()
    {
        this->Head= nullptr;
        this->Next= nullptr;
    }
    astk(Object object)
    {
        push(object);
    }
    void push(Object object)
    {
        this->push_back(object);
    }
    Object pop_out()
    {
        Object last;
        if (this->size() > 0) {
            last= (*this)[this->size() - 1];
            this->del(this->size() - 1);
        }
        return last;
    }
    Object pop_item()
    {
        Object last;
        if (this->size() > 0) { last= (*this)[this->size() - 1]; }
        return last;
    }
};
