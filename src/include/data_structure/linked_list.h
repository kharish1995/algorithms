/*
 * This code is developed to implement Linked List
 * The authors of this code is Harish Karunakaran
 * The code is available at https://github.com/HarishKarunakaran/Algorithms
 *
 */

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include <vector>
#include <cmath>
#include <memory>

struct Node{
    int data;
    Node* next;
};

class Linkedlist{
    Node *head_;
public:
    Linkedlist();
    Linkedlist(Node* head);
    void add_node(int);
    void delete_node();
    void display();
    ~Linkedlist();
};

#endif // LINKED_LIST_H
