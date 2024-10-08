// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // Implement your solution here

    // create a tracker vector to count which integer exist and which not
    int sizeA{(int) A.size()};
    int counterSize{sizeA + 1}; // has extra element to avoid -1 in each element fill
    vector<bool> counter(counterSize, false);

    for(auto num: A)
    {
        if(num > 0 && num < counterSize)
        {
            counter[num] = true;
        }
    }

    for(int i = 1; i < counterSize; i++)
    {
        if(counter[i] == false)
        {
            return i; 
        }
    }

    return counterSize;
}