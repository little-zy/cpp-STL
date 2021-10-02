#include <iostream>
#include "zyalt.h"
using namespace std;
template <class Object>
class zyalt
/*
 *
 * alt is the short of Array-Linked-list
 *
 * which is using linked list to realize arrays
 *
 * template form makes it convenient to be widely used
 *
 * any questions please contact zy
 *
 * All rights reserved
 *
 * 2021
 *
 */
{
 protected:
    Object Data;
    zyalt* Next;
    zyalt* Head;
 public:
    zyalt()
    {
        Head= nullptr;
        Next= nullptr;
    }
    zyalt(Object object)
    {
        this->push_back(object);
        Head= this;
    }
    void push_back(Object object)
    {
        zyalt* next= Head;
        if (next != nullptr) {
            while (next->Next != nullptr) { next= next->Next; }
            next->Next= new zyalt;
            next= next->Next;
            next->Head= Head;
        } else {
            Head= this;
            next= Head;
        }
        next->Data= object;
    }
    Object& operator[](int Iter)
    {
        if (Iter < this->size()) {
            zyalt* next= Head;
            while (Iter-- && next != nullptr) { next= next->Next; }
            return next->Data;
        }
    }
    int size()
    {
        if (Head == nullptr) return 0;
        int cnt= 1;
        zyalt* next= Head;
        while (next->Next != nullptr) {
            next= next->Next;
            cnt++;
        }
        return cnt;
    }
    int find(Object object)
    {
        int cnt= this->size();
        int Iter= 0;
        zyalt* next= Head;
        while (cnt--) {
            if (next->Data == object) return Iter;
            Iter++;
            next= next->Next;
        }
        return -1;
    }
    void del(int Iter)
    {
        int cnt= this->size();
        if (Iter >= cnt)
            return;
        else {
            zyalt* next= Head;
            zyalt* front= next;
            while (Iter--) {
                front= next;
                next= next->Next;
            }
            front->Next= next->Next;
            if (next == Head) {
                Head= next->Next;
                while (next->Next != nullptr) {
                    next->Head= Head;
                    next= next->Next;
                }
                // this=Head;
            }
            // delete next;
            if (cnt == 1) {
                Head= nullptr;
                Next= nullptr;
            }
            return;
        }
    }
    void del_item(Object object)
    {
        del(this->find(object));
    }
    void Sort()
    {
        int cnt= this->size();
        for (int i= 1; i < cnt; i++) {
            Object iTemp= (*this)[i]; /*设置插入值*/
            int iPos= i - 1;
            while ((iPos >= 0) && (iTemp < (*this)[iPos])) /*寻找插入值的位置*/
            {
                (*this)[iPos + 1]= (*this)[iPos]; /*插入数值*/
                iPos--;
            }
            (*this)[iPos + 1]= iTemp;
        }
    }
    void print_all()
    {
        int i= 0, cnt= this->size();
        for (i= 0; i < cnt - 1; i++) { cout << (*this)[i] << ' '; }
        if (cnt == 0)
            cout << endl;
        else
            cout << (*this)[i] << endl;
    }
    void clear()
    {
        int size= this->size();
        while (size--) { this->del(size); }
    }
    ~zyalt()
    {
        clear();
    }
};
