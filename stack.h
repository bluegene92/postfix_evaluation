#ifndef STACK_H
#define STACK_H

using namespace std;
template<class T> class Stack
{
    int index;
    static const int MAX_SIZE = 100;
    T arr[ MAX_SIZE ];
    public:
        Stack(): index(0) {}

        void push(T a)
        {
            arr[ index ] = a;
            ++index;
        }

        void pop()
        {
            if (index > 0)
            {
                arr[ index ] = 0;
                --index;
            }
        }

        T bottom()
        {
            return arr[ 0 ];
        }

        T top()
        {
            return arr[ index - 1 ];
        }

        T operand1()
        {
            return arr[ index - 2 ];
        }

        T operand2()
        {
            return arr[ index - 1 ];
        }


        int size()
        {
            return index;
        }

        string flush()
        {
            string str;
            for (int i = index; i >= 0; --i && --index)
            {
                    str += arr [ i ];
                    str += " ";
            }
            return str;
        }

        void print()
        {
            for (int i = 0; i < index; ++i)
                cout << arr[ i ] << endl;
        }

        void printStack()
        {
            for (int i = index - 1; i >= 0; --i)
                cout << arr[ i ] << endl;
        }

        bool empty()
        {
            if (index == 0)
                return true;
        }
};

#endif
