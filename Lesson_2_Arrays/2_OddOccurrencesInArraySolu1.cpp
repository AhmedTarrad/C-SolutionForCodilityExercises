// you can use includes, for example:
#include <algorithm>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // Implement your solution here
    if(A.size() == 1)
    {
        return A[0];
    }

    vector<int> sortedA(A);

    sort(sortedA.begin(), sortedA.end());
    int result{sortedA[0]};

    for (unsigned int i = 0; i < sortedA.size(); i+=2)
    {
        if(sortedA[i] != sortedA[i+1])
        {
            result = sortedA[i];
            break;
        }
    }

    return result;
}