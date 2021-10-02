#include "alt.h"
#include "aque.h"
#include "astk.h"
template <class Object>
class bitr
/*
 *
 * bitr is the short of BinaryTree
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
#define nonenodesymbol -1
 public:
    struct Node
    {
        Object data;
        Node* left;
        Node* right;
        Node();
        Node(Object object, Node* L= nullptr, Node* R= nullptr);
        ~Node() {}
    };
    Node* Root= new Node;
    bitr();
    bitr(bitr& b);
    Node* copytree(Node* root);
    bitr(Object object);
    Node* newleftnode(Node* node, Object object);
    Node* newrightnode(Node* node, Object object);
    Node* leftnode(const Node* node);
    Node* rightnode(const Node* node);
    int depth(const Node* root) const;
    int getdepth();
    void creatBinaryTreebyLayer(Node* root);
    Object& operator[](int Iter);
    /*
     * returns element counted by layer
     */
    Node* return_node(int Iter);
    /*
     * returns element's node counted by layer
     *
     * static data may make it more fast when Iter increases
     *
     *
     */
    int size() const;
    int layerwayfind(Object object);
    Object& preorder_mine(int Iter);
    void preorder(Node* node, alt<Object>& path);
    void inorder(Node* node, alt<Object>& path);
    void posorder(Node* node, alt<Object>& path);
    void preorderTraversal(Node* root, alt<Object>& path);
    void preorderTraversalnew(Node* root, alt<Object>& path);
    void inorderTraversal(Node* root, alt<Object>& path);
    void preorderTraversalpair(Node* root, alt<Object>& path);
    void inorderTraversalpair(Node* root, alt<Object>& path);
    void postorderTraversalpair(Node* root, alt<Object>& path);
    void clear();
    void delsubtree(Node* node);
    void addtree();
    void Sort();
    void print_all();
    ~bitr();
};
