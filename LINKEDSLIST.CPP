#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val): data(val), next(nullptr) {}
};

class LinkedList {
    Node* head;
public:
    LinkedList(): head(nullptr) {}
    void push_back(int val) {
        Node* node = new Node(val);
        if(!head) { head = node; return; }
        Node* cur = head;
        while(cur->next) cur = cur->next;
        cur->next = node;
    }
    void push_front(int val) {
        Node* node = new Node(val);
        node->next = head;
        head = node;
    }
    bool remove(int val) {
        if(!head) return false;
        if(head->data == val) {
            Node* t = head;
            head = head->next;
            delete t;
            return true;
        }
        Node* cur = head;
        while(cur->next && cur->next->data != val) cur = cur->next;
        if(!cur->next) return false;
        Node* t = cur->next;
        cur->next = t->next;
        delete t;
        return true;
    }
    void display() const {
        Node* cur = head;
        while(cur) {
            cout << cur->data;
            if(cur->next) cout << " -> ";
            cur = cur->next;
        }
        cout << '\n';
    }
    ~LinkedList() {
        Node* cur = head;
        while(cur) {
            Node* t = cur;
            cur = cur->next;
            delete t;
        }
    }
};

int main() {
    LinkedList list;
    int n;
    if(!(cin >> n)) return 0;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        list.push_back(x);
    }
    list.display();
    return 0;
}
