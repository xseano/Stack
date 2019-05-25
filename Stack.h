// Stack.h
// oberoi, sean
// ssoberoi

#ifndef STACK_H
#define STACK_H

#include "LinkedList.h"

template <typename T>
class Stack: public LinkedList<T>
{
    public:

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

        void pop(T data)
        {
            this->removeNode(data);
        }

        void push(T data)
        {
            this->addNode(data);
        }
};

#endif
