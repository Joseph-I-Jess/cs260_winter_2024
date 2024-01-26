// A struct that just holds some simple values.
struct node {
    int id;
    int value;
    struct node *next;
};

// Clear and then delete a reference to a node.
void delete_node(node *current_node) {
    current_node->id=0;
    current_node->value=0;
    current_node->next = nullptr;
    delete current_node;
}