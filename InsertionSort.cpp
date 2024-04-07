#include "InsertionSort.h"
#include <iostream>

void insertion_sort(Node*& head) {
    if (!head || !head->next)
        return; // If list is empty or has only one element, it's already sorted

    Node* sorted = nullptr; // Initialize sorted linked list
    Node* current = head;

    while (current) {
        Node* next = current->next; // Store next node before moving current

        if (!sorted || current->data < sorted->data) {
            // Insert current node at the beginning of sorted list
            current->next = sorted;
            sorted = current;
        } else {
            // Find the insertion point in the sorted list
            Node* temp = sorted;
            while (temp->next && temp->next->data < current->data) {
                temp = temp->next;
            }
            // Insert current node after temp
            current->next = temp->next;
            temp->next = current;
        }

        // Move to the next unsorted node
        current = next;
    }

    // Update head pointer to point to the sorted list
    head = sorted;
}

void printList(Node* head) {
    while (head) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}
