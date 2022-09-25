#include <iostream>

class IStack {
   public:
    virtual void createStack(int sizestack) = 0;
    virtual void push(int num) = 0;
    virtual void pop(int num) = 0;
    virtual void peek(int top) = 0;
    virtual bool isFull(int top) = 0;
    virtual bool isEmpty(int top) = 0;
};

class stack : public IStack {
   public:
    int* arr;
    int top = -1;
    int capacity;
    void createStack(int sizestack) {
        capacity = sizestack;
        arr = new int[capacity];
    };

    void push(int num) {
        if (isFull(top)) {
            std::cout << "the stack is full " << std::endl;
        } else {
            arr[++top] = num;
        }
        //
    };
    void pop(int num) {
        if (isEmpty(top)) {
            std::cout << "stack is empty, nothing to pop" << std::endl;
        } else {
            std::cout << "popped: " << arr[top] << std::endl;
            top--;
        }
    };
    void peek(int top) {
        if (isEmpty(top)) {
            std::cout << "stack is empty, nothing to return" << std::endl;
        } else {
            std::cout << "peeked: " << arr[top] << std::endl;
        }
    };
    bool isEmpty(int top) {
        if (top == -1) {
            return true;
        }
        return false;
    };
    bool isFull(int top) {
        if (top == capacity - 1) {
            return true;
        }
        return false;
    };
};

int main() {
    stack* stackptr;
    stack stack1;
    stackptr = &stack1;
    stackptr->createStack(20);
    stackptr->push(2);
    stackptr->push(20);
    stackptr->push(22);
    stackptr->peek(stackptr->top);

    return 0;
};
// incrementn top
//
// add number to the array
//
// stack is LIFO
//
//
// so we need to have an element come into the stack and then increment
// the amount of elements in the stack
//
// for popping elements from the stack we can do so by first checking if
// the stack is empty
//
// then returning the element from the stack at the first index and shit
// the elements down from their position in the stack at the current
// moment
//
//
// peek method is a submethod used for retrieving the element at the
// first index of the stack
//
// used when popping element from the stack, you will initially run an
// isEmpty check
//
// we need mutable state class variables in order to manipulate the
// structure
//
//
// in C we do this by creating a struct with the data that represents
// the stack, then creating a pointer to an object of the struct
//
// this pointer instantiates the object in the heap by first being
// allocated using malloc with the size of the structure
//
// afterwards you reate a pointer that points to the objects variables
//
// This is C OOP which is probably what is used in old fashion GNOME gnu
// network object model interfaces and the like
//
//
// structure is checked for emptiness through the variable that we added
// which represents the current capacity of the stack
//
//
//
//
//

