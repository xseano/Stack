// Stack.h
// oberoi, sean
// ssoberoi

#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

template <typename T>
class Stack: protected LinkedList<T>
{
    public:

        bool isEmpty()
        {
            return this->LinkedList<T>::isEmpty();
        }

        int getFrequencyOf(T data)
        {
            return this->LinkedList<T>::getFrequencyOf(data);
        }

        void display()
        {
            std::vector<T> list = this->reverseVector();

            cout << "\n--------\n";

            for (int i = 0; i < list.size(); i++)
            {
                cout << list[i] << endl;
            }

            cout << "Stack Size: " << list.size() << endl;
            cout << "--------" << endl;
        }

        void pop()
        {
            std::vector<T> list = this->reverseVector();
            T top = list[0];

            this->removeNode(top);
        }

        T peek()
        {
            std::vector<T> list = this->reverseVector();
            T top = list[0];

            return top;
        }

        void push(T data)
        {
            this->addNode(data);
        }
};

#endif
