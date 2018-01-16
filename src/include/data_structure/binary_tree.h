/*
 * This code is developed to implement Binary Tree
 * The authors of this code is Harish Karunakaran
 * The code is available at https://github.com/HarishKarunakaran/Algorithms
 *
 */

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <iostream>
#include <vector>
#include <cmath>
#include <memory>

struct Node{
    int data;
    Node* left;
    Node* right;
};

class Binarytree{
    Node *head_;
public:
    Binarytree();
    Binarytree(Node* head);
    void insert_node();
    void delete_node();
    ~Binarytree();
};

#endif // BINARY_TREE_H
