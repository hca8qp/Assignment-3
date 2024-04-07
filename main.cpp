#include <iostream>
#include <vector>

#include "Queue.h"
#include "LinearSearch.h"
#include "InsertionSort.h"


int main() {

    // Create an instance of the queue with integers and insert 10 values into it.
    Queue<int> myQueue;
    for (int i = 1; i <= 10; ++i) {
        myQueue.push(i);
    }

    // Displays all the elements of the Queue
    myQueue.display();
  

    // Move the front element to the rear and display the updated queue
    myQueue.move_to_rear();
    myQueue.display();
    std::cout<< std::endl;

    std::vector<int> arr = {1, 2, 3, 4, 5, 3, 6, 7, 3, 8};
    int target = 3;

    int index = last_occurrence(arr, target);

    if (index != -1)
        std::cout << "The last occurrence of " << target << " is at index: " << index << std::endl << std::endl;
    else
        std::cout << "Target not found in the vector." << std::endl;
  
  // Example usage of Insertion Sort
    Node* head = new Node(3);
    head->next = new Node(1);
    head->next->next = new Node(4);
    head->next->next->next = new Node(2);
  
    std::cout<< std::endl;
    std::cout << "Original list: ";
    printList(head);

    insertion_sort(head);

    std::cout << "Sorted list: ";
    printList(head);

    // Free memory
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
  }
