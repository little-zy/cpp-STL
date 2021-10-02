#ifndef ZYALT_H
#define ZYALT_H
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
 @ zhouy676
 *
 * All rights reserved
 *
 * 2021
 *
 */
{
    zyalt();
    zyalt(Object object);
    void push_back(Object object);
    Object& operator[](int Iter);
    int size();
    int find(Object object);
    void del(int Iter);
    void del_item(Object object);
    void Sort();
    void print_all();
    void clear();
    ~zyalt();
};
#endif