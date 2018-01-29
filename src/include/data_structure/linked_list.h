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
    int data_;
    std::shared_ptr<Node> next_;
};

class Linkedlist{
    std::shared_ptr<Node> head_;
    int length;
public:
    Linkedlist();
    Linkedlist(std::shared_ptr<Node> head);
    void add_node(int);
    void delete_node();
    void display();
    void get_length();
    int node_at_position(int position);
    int node_from_end(int position);
    ~Linkedlist();
};

#endif // LINKED_LIST_H
