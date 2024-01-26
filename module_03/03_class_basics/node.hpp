#include <string>

using std::string;

class Node {
    public:
        int id;
        int value;
        Node *next;

        Node();

        string to_string();
};
