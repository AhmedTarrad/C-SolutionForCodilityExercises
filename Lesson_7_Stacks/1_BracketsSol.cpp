#include <stack>
#include <string>

using namespace std;

int solution(string &S) {

    if(S.empty())
    {
        return 1;
    }

    stack<char> nestingTracker;

    for(unsigned int i = 0; i < S.length(); i++)
    {   
        char letter{S[i]};

        if(letter == '{' || letter == '(' || letter == '[')
        {
            nestingTracker.push(letter);
        }
        else if(nestingTracker.empty())
        {
            return 0;
        }
        else if(letter == '}')
        {
            if(nestingTracker.top() == '{')
            {
                nestingTracker.pop();
            }
            else 
            {
                return 0;
            }   
        }
        else if(letter == ')')
        {
            if(nestingTracker.top() == '(')
            {
                nestingTracker.pop();
            }
            else 
            {
                return 0;
            }   
        }
        else if(letter == ']')
        {
            if(nestingTracker.top() == '[')
            {
                nestingTracker.pop();
            }
            else 
            {
                return 0;
            }   
        }
    }

    if(nestingTracker.empty())
    {
        return 1;
    }

    return 0;
}