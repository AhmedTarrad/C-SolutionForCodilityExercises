

// you can use includes, for example:
#include <algorithm>
#include <functional>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // Implement your solution here

    if(A.size() < 3)
    {
        return 0;
    }

    // First sort the array in descending order 
    vector<int> sortedA(A);

    std::sort(sortedA.begin(), sortedA.end(), std::greater<int>());

    for(int i = 0; i < sortedA.size()-2; i++)
    {
        long long int elm1{sortedA[i]};
        long long int elm2{sortedA[i+1]};
        long long int elm3{sortedA[i+2]};
        if(elm1 < elm2 + elm3 && elm2 < elm1 + elm3 && elm3 < elm2 + elm1)
        {return 1;}
    }
    return 0;
}

