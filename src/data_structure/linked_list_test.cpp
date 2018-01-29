#include <data_structure/linked_list.h>

int main()
{
    Linkedlist a;
    a.add_node(5);
    a.add_node(6);
    a.add_node(7);
    a.display();
    int b = a.node_at_position(0);
    int c = a.node_from_end(4);
    std::cout << c << std::endl;
    return 0;
}

