#include <vector> 
#include <algorithm>

int solution(vector<int> &A) {
    // Implement your solution here
    int sizeA{(int)A.size()};

    vector<int> trackVector(sizeA, 0);

    for(auto element : A)
    {   
        if (element > sizeA || trackVector[element-1] != 0)
        {
            return 0;
        }

        trackVector[element-1] = 1;
    }

    return 1;
}