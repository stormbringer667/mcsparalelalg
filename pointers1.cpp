#include <iostream>
using namespace std;
struct Node {
    char data;
    Node* next;
    Node(char c) : data(c), next(nullptr) {}
};
void printList(Node* head) {
    while (head) {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NIL\n";
}
Node* reverseList(Node* head) {
    Node* prev = nullptr, * curr = head, * next;
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
int main() {
    int n;
    cout << "Enter list length (max 26): ";
    cin >> n;
    if (n < 1 || n > 26) return 1;

    Node* head = new Node('A'), * tail = head;
    for (char c = 'B'; c < 'A' + n; c++) {
        tail->next = new Node(c);
        tail = tail->next;
    }
    cout << "Original: "; printList(head);
    head = reverseList(head);
    cout << "Reversed: "; printList(head);
}
