// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // Implement your solution here

    int unpairedResult{0};

    for (auto element : A)
    {
        unpairedResult ^= element;
    }
    return unpairedResult;
}