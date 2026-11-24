#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int d) {
        data = d;
        prev = NULL;
        next = NULL;
    }
};

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    // Create five nodes dynamically and connect them
    cout << "Enter 5 integer values: ";
    for (int i = 0; i < 5; i++) {
        int value;
        cin >> value;

        Node* newNode = new Node(value);   // dynamic allocation

        if (head == NULL) {
            head = tail = newNode;         // first node: prev is NULL
        } else {
            tail->next = newNode;          // previous node points forward
            newNode->prev = tail;          // new node points back
            tail = newNode;                // last node: next stays NULL
        }
    }

    // Forward traversal (head -> tail), also counts nodes
    int count = 0;
    cout << "Forward Traversal: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
        count++;
    }
    cout << "NULL" << endl;

    // Backward traversal (tail -> head)
    cout << "Backward Traversal: ";
    temp = tail;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;

    cout << "Total Nodes: " << count << endl;

    // Free memory
    while (head != NULL) {
        Node* del = head;
        head = head->next;
        delete del;
    }
    return 0;
}
