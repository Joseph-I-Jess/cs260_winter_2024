#include <string>

using std::string;

class Node {
    int id;
    int value;
    Node *next;

    void set_id(int new_id);
    void set_value(int new_value);
    void set_next(Node *new_next);

    public:
        Node (int id, int value, Node *next);
        Node (int id, int value);
        int get_id();
        int get_value();
        Node *get_next();
        string to_string();
};
