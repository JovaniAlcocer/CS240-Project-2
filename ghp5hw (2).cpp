#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    string singleword;//Stores a string, which will hold the word we will ask the user for

    bool palindrome = true;//Will hold true, and if we compare and if there is a instance in
    //which the letters are not the same then we return false.



    cout<<"Choose one word to figure if its a palindrome or not :";
    cin >> singleword;

    queue<char> queueword;// will store word in queue

    stack<char> stackword;// will store word in a stack

// pushes the letters of the word in side stack and queue
    for (char letter : singleword) {
        stackword.push(letter);
        queueword.push(letter);
    }

    while (!stackword.empty()) {

       if (stackword.top() != queueword.front()) {

          palindrome = false;//set the bool to false if the top of the stack is not the same as
          //the front of the stack
        }
        stackword.pop(); //pop to continoue going
        queueword.pop();
    }
//prints if the word is a palindrome or not
    if (palindrome) {
        cout<<"The word "<<singleword<<" that you picked is a palindrome.";
    }
        else{

        cout<<"The word "<<singleword<<" that you picked is not a palindrome.";
    }

    return 0;
}

