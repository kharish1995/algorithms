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
    temp->data = data;
    temp->next = NULL;
    if(head_ == NULL)
        head_ = temp;

    else{
        for(Node* now = head_; now!=NULL; now = now->next){
            if(now->next == NULL){
                now->next = temp;
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
    for(Node* temp = head_; temp!=NULL; temp = temp->next)
        std::cout << temp->data << '\t';
    std::cout << std::endl;
}

Linkedlist::~Linkedlist()
{

}
