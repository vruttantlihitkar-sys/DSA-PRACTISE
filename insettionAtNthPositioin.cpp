#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void insertNthFromBackward(Node*& head, int n, int value) {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    int posFromFront = count - n + 1;
    if (posFromFront < 1 || posFromFront > count + 1) {
        cout << "Invalid position!" << endl;
        return;
    }
    Node* newNode = new Node(value);
    if (posFromFront == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    temp = head;
    for (int i = 1; i < posFromFront - 1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Original List: ";
    printList(head);

    int n = 2;
    int value = 25;
    insertNthFromBackward(head, n, value);

    cout << "After Insertion: ";
    printList(head);

    return 0;
}
