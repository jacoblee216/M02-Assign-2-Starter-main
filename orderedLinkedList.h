#ifndef OLLIST_H
#define OLLIST_H
#include "linkedList.h"
#include "linkedListIterator.h"
template <class Type>
class orderedLinkedList : public linkedList<Type> {
public:
    void insertNode(const Type& newItem);
};

template <class Type>
void orderedLinkedList<Type>::insertNode(const Type& newItem)
{
    node<Type> *current;
    node<Type> *trailCurrent = nullptr;
    node<Type> *newNode;

    bool found;

    newNode = new node<Type>;
    newNode->info = new Type(newItem);
    newNode->link = nullptr;

    if (this->first == nullptr) {
        this->first = newNode;
        this->last = newNode;
        this->count++;
    }
    else {
        current = this->first;
        found = false;

        while (current != nullptr && !found) {
            if (*(current->info) >= *(newNode->info)) {
                found = true;
            }
            else {
                trailCurrent = current;
                current = current->link;
            }
        }
        if (current == this->first) {
            newNode->link = this->first;
            this->first = newNode;
            this->count++;
        }
        else {
            trailCurrent->link = newNode;
            newNode->link = current;

            if (current == nullptr) {
                this->last = newNode;
            }
            this->count++;
        }
    }
}

#endif