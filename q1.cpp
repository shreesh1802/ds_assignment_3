#include <iostream>
using namespace std;

#define MAX 3   

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() 
	{
        top = -1;
    }

    bool isFull() 
	{
        return top == MAX - 1;
    }

    bool isEmpty() 
	{
        return top == -1;
    }

    void push(int val) 
	{
        if (isFull()) 
		{
            cout << "Stack full" << endl;
        } 
		else 
		{
            arr[++top] = val;
        }
    }

    void pop() 
	{
        if (isEmpty()) 
		{
            cout << "Stack is empty" << endl;
        } 
		else 
		{
            cout << "Popped: " << arr[top--] << endl;
        }
    }
    
    int peek() 
	{
        if (!isEmpty())
            return arr[top];
        else {
            cout << "Stack is empty" << endl;
            return -1; 
        }
    }
};

int main()
{
    Stack s;
        
    cout<<"Pushing element: "<<10<<endl;
    s.push(10);
    cout<<"Pushing element: "<<20<<endl;
    s.push(20);
    cout<<"Pushing element: "<<30<<endl;
    s.push(30);
    cout<<"Pushing element: "<<40<<endl;
    s.push(40);
    s.pop();
    cout<<"Pushing element: "<<40<<endl;
    s.push(40);

    s.pop();
    s.pop();
    s.pop();
    s.pop();

    return 0;
}


