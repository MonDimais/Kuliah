#include <iostream>
using namespace std;

// Definisi struktur untuk node
struct Node {
    int data;
    Node* next;
};

void input(Node** head, int newData) {
    Node* newNode = new Node();
    Node* last = *head;
    newNode->data = newData;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    while (last->next != nullptr) {
        last = last->next;
    }

    last->next = newNode;
}

void pembalik(Node** head) {
    Node* current = *head;
    Node *prev = nullptr, *next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

void output(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int n, data;

    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Masukkan data ke-" << i + 1 << ": ";
        cin >> data;
        input(&head, data);
    }

    cout << "Linked list sebelum dibalikkan: ";
    output(head);

    pembalik(&head);

    cout << "Linked list setelah dibalikkan: ";
    output(head);

    return 0;
}
