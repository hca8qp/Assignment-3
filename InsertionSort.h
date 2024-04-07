#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

void insertion_sort(Node*& head);

void printList(Node* head);

#endif // INSERTION_SORT_H
