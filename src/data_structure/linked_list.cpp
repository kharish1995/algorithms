#include <data_structure/linked_list.h>

Linkedlist::Linkedlist()
{
    head_ = NULL;
}

Linkedlist::Linkedlist(Node* head) : head_(head)
{

}

void Linkedlist::add_node(int data)
{
    Node* temp = new Node;
    temp->data_ = data;
    temp->next_ = NULL;
    if(head_ == NULL)
        head_ = temp;

    else{
        for(Node* now = head_; now != NULL; now = now->next_){
            if(now->next_ == NULL){
                now->next_ = temp;
                return;
            }
        }
    }
}

void Linkedlist::delete_node()
{

}

void Linkedlist::display()
{
    for(Node* temp = head_; temp != NULL; temp = temp->next_)
        std::cout << temp->data_ << '\t';
    std::cout << std::endl;
}

Linkedlist::~Linkedlist()
{

}
