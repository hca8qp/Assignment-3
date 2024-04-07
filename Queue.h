#include <iostream>

template <class T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& value) : data(value), next(nullptr) {}
    };

    Node* frontNode;
    Node* rearNode;
    size_t queueSize;

public:
    Queue();
    void push(const T& value);
    void pop();
    T front() const;
    size_t size() const;
    bool empty() const;
    void move_to_rear();
    void display() const;
    ~Queue();

private:
    bool isEmpty() const;
};

#endif // QUEUE_H
