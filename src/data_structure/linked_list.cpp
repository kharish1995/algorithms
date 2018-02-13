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
    if(head_ == nullptr){
        std::cout << "List Empty";
        return false;
    }
    std::shared_ptr<Node> temp = std::make_shared<Node>(Node{head_->data_, head_});
    int count = 0;
    while(temp != nullptr){
        if(count == position)
            return temp->data_;
        count++;
        temp = temp->next_;
    }
    std::cout << "There is no node at: " << position << std::endl;
}

int Linkedlist::node_from_end(int position)
{
    if(head_ == nullptr){
        std::cout << "List Empty";
        return false;
    }
    std::shared_ptr<Node> temp1 = std::make_shared<Node>(Node{head_->data_, head_});
    std::shared_ptr<Node> temp2 = std::make_shared<Node>(Node{head_->data_, head_});
    int count = 0;
    get_length();
    if(position <= 0 || position > length){
        std::cout << "Position out of bounds";
        return -1;
    }
    while(temp1 != nullptr){
        if(count == position)
            break;
        count++;
        temp1 = temp1->next_;
    }
    while(temp1 != nullptr){
        temp2 = temp2->next_;
        temp1 = temp1->next_;
    }
    return temp2->data_;
}

void Linkedlist::delete_node()
{

}

void Linkedlist::display()
{
    if(head_ == nullptr) return;
    std::shared_ptr<Node> temp = std::make_shared<Node>(Node{head_->data_, head_->next_});
    std::cout << temp.use_count() << '\t';
    while(temp != nullptr){
        //std::cout << temp->data_ << '\t';
        temp = temp->next_;
    }
    std::cout << std::endl;
}

void Linkedlist::get_length()
{
    if(head_ == nullptr) return;
    std::shared_ptr<Node> temp = std::make_shared<Node>(Node{head_->data_, head_->next_});
    while(temp != nullptr){
        length++;
        temp = temp->next_;
    }
}

Linkedlist::~Linkedlist()
{

}
