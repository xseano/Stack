// Main .cpp
// oberoi, sean
// ssoberoi

#include "Stack.h"
typedef float type;

int main()
{
    Stack<type>* ST = new Stack<type>();

    if (ST->isEmpty())
    {
        cout << "\n--------\nNew Stack";
    }

    ST->push(1.87);
    ST->push(2.52);
    ST->push(2.94);
    ST->push(3.17);
    ST->push(3.64);
    ST->display();

    cout << "The top of the stack is currently: " << ST->peek() << endl;

    cout << "Removing the top of this stack..";
    ST->pop();
    ST->display();

    cout << "Lets add another 1.87..";
    ST->push(1.87);
    ST->display();

    cout << "Wait.. how many times is 1.87 referenced in the queue?" << endl;
    cout << "Looks like 1.87 has " << ST->getFrequencyOf(1.87) << " occurences in the queue!" << endl;

    return 0;
}