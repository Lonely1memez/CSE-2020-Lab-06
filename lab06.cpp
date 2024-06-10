// lab06.cpp
//Name:Antonio Mora
// Date: 6/10/2024
//Function of the lab: Applying Stack to check if the parenthasis are balanced in the output
#include <iostream>
#include  <string>
#include "Stack.cpp"

using namespace std;

int main()
{
    Stack <char> sc;
    char c;
    bool balanced = true;

    cout << "enter chars, exit when enter 'x' : ";
    cin >> c;

    while(c != 'x')
      {
        if(c == '(')
          sc.push(c);
        else if(c == ')')
        {
          if(sc.empty())
          {
            balanced = false;
            break;
          }
          else
            sc.pop();
        }
        cin >> c;
      }
    if(!sc.empty() || balanced == false)
      cout << "The parenthese are unbalanced";
  else
      cout << "The parentese are balanced";
    return 0;
}