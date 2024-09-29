
// you can use includes, for example:
#include <vector>


vector<int> solution(vector<int> &A, int K) {
    // Implement your solution here
    if(A.empty())
    {
        return A;
    }

    int sizeOfA{static_cast<int>(A.size())};
    vector<int> rotatedA(A);
    int realRotations{K % sizeOfA};

    if(realRotations == 0)
    {
        return rotatedA;
    }

    for (int i = 0; i < sizeOfA; i++)
    {
        int mappedElementAfterRotation{(sizeOfA - realRotations + i) % sizeOfA};
        rotatedA[i] = A[mappedElementAfterRotation];
    }

    return rotatedA;

}

