#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class CircularLinkedList {
    Node* tail;
public:
    CircularLinkedList() {
        tail = nullptr;
    }

    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        if (tail == nullptr) {
            newNode->next = newNode;
            tail = newNode;
        } else {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void display() {
        if (tail == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        Node* current = tail->next;
        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != tail->next);
        cout << endl;
    }

    void deleteFromBeginning() {
        if (tail == nullptr) {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }
        Node* head = tail->next;
        if (head == tail) {
            delete head;
            tail = nullptr;
        } else {
            tail->next = head->next;
            delete head;
        }
    }

    ~CircularLinkedList() {
        if (tail == nullptr)
            return;
        Node* head = tail->next;
        Node* current = head;
        do {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        } while (current != head);
    }
};

int main() {
    CircularLinkedList cll;
    cll.insert(10);
    cll.insert(20);
    cll.insert(30);
    cll.insert(40);
    cout << "List elements: ";
    cll.display();
    cll.deleteFromBeginning();
    cout << "After deleting from beginning: ";
    cll.display();
    return 0;
}
