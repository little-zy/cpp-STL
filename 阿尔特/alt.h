#ifndef ALT_H
#define ALT_H
template <class Object>
class alt
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
    alt();
    alt(Object object);
    void push_back(Object object);
    Object& operator[](int Iter);
    int size();
    int find(Object object);
    void del(int Iter);
    void del_item(Object object);
    void Sort();
    void print_all();
    void clear();
    ~alt();
};
#endif
