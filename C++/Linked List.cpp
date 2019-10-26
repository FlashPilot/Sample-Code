#include <iostream>

using namespace std;

class Node {
public:
    int date;
    Node* next;
};

int main() {
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;

    head = new Node();
    second = new Node();
    third = new Node();

    head->date = 1;
    head->next = second;

    second->date = 2;
    second->next = third;

    third->date = 3;
    third->next = nullptr;

    cout << head->date << '\n';

    return 0;
}
