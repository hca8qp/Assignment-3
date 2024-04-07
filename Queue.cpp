#include "Queue.h"

template <class T>
Queue<T>::Queue() : frontNode(nullptr), rearNode(nullptr), queueSize(0) {}

template <class T>
void Queue<T>::push(const T& value) {
    Node* newNode = new Node(value);
    if (isEmpty()) {
        frontNode = rearNode = newNode;
    } else {
        rearNode->next = newNode;
        rearNode = newNode;
    }
    queueSize++;
}

template <class T>
void Queue<T>::pop() {
    if (!isEmpty()) {
        Node* temp = frontNode;
        frontNode = frontNode->next;
        delete temp;
        if (frontNode == nullptr) {
            rearNode = nullptr;
        }
        queueSize--;
    }
}

template <class T>
T Queue<T>::front() const {
    if (!isEmpty()) {
        return frontNode->data;
    } else {
        throw std::runtime_error("Queue is empty");
    }
}

template <class T>
size_t Queue<T>::size() const {
    return queueSize;
}

template <class T>
bool Queue<T>::empty() const {
    return queueSize == 0;
}

template <class T>
void Queue<T>::move_to_rear() {
    if (!isEmpty() && queueSize > 1) {
        T frontElement = front();
        pop();
        push(frontElement);
    }
}

template <class T>
void Queue<T>::display() const {
    Node* current = frontNode;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

template <class T>
Queue<T>::~Queue() {
    while (!isEmpty()) {
        pop();
    }
}

template <class T>
bool Queue<T>::isEmpty() const {
    return frontNode == nullptr;
}

// Explicit instantiation for supported types
template class Queue<int>;
