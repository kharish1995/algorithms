#include <data_structure/linked_list.h>

Linkedlist::Linkedlist()
{
    head_ = nullptr;
    length = 0;
}

Linkedlist::Linkedlist(std::shared_ptr<Node> head) : head_(head)
{
    length = 0;
}

void Linkedlist::add_node(int data)
{
    std::shared_ptr<Node> temp = std::make_shared<Node>(Node{data, nullptr});
    if(head_ == nullptr)
        head_ = temp;
    else{
        std::shared_ptr<Node> now = std::make_shared<Node>(Node{head_->data_, head_});
        while(now != nullptr){
            if(now->next_ == nullptr){
                now->next_ = temp;
                return;
            }
        now = now->next_;
        }
    }
}

int Linkedlist::node_at_position(int position)
{
    std::shared_ptr<Node> temp = std::make_shared<Node>(Node{head_->data_, head_});
    int count = 0;
    while(temp != nullptr){
        if(count == position)
            return temp->data_;
        count++;
        temp = temp->next_;
    }
}

void Linkedlist::delete_node()
{

}

void Linkedlist::display()
{
    std::shared_ptr<Node> temp = std::make_shared<Node>(Node{head_->data_, head_->next_});
    while(temp != nullptr){
        std::cout << temp->data_ << '\t';
        temp = temp->next_;
    }
    std::cout << std::endl;
}

void Linkedlist::get_length()
{
    std::shared_ptr<Node> temp = std::make_shared<Node>(Node{head_->data_, head_->next_});
    while(temp != nullptr){
        length++;
        temp = temp->next_;
    }
}

Linkedlist::~Linkedlist()
{

}
