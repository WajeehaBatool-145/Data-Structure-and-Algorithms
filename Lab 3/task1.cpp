#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    // Take five values from the user and create nodes
    cout << "Enter 5 integer values: ";
    for (int i = 0; i < 5; i++) {
        int value;
        cin >> value;

        Node* newNode = new Node(value);

        if (head == NULL) {
            head = tail = newNode;   // first node
        } else {
            tail->next = newNode;    // attach at the end
            tail = newNode;
        }
    }

    // Traverse, display, and count
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
        count++;
    }
    cout << "NULL" << endl;
    cout << "Total nodes: " << count << endl;

    // Free memory
    while (head != NULL) {
        Node* del = head;
        head = head->next;
        delete del;
    }
    return 0;
}
