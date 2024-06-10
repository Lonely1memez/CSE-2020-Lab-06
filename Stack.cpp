// Stack.cpp
#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack 
{
public:
  Stack()
  {
    topOfStack = -1;
    items = new T[CAPACITY];	
  }

  //Desctructor
  ~Stack()
  {
    delete[] items;
  }

  // Checks if the stack is empty.  
  bool empty() const
  {
    return (topOfStack == -1);
  }

  // Makes the stack to the empty state.  
  void clear()
  {
    topOfStack = -1;
  }

  // Insert item in the stack.
  void push(const T& item)
  {
      if (topOfStack < CAPACITY -1)
      {
        topOfStack++;
        items[topOfStack] = item;
      }
  }

  // Return the top element.
  const T& top() const
  {
    return items[topOfStack];
  }

  // Removes the top element.
  void pop()
  {
    if (!empty())
      topOfStack --;
  }

  static const int CAPACITY = 50;

private:

  int topOfStack;  // -1 for empty stack
  T* items;
};
#endif