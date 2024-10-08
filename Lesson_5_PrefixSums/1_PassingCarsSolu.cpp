

int solution(vector<int> &A) {
    // Implement your solution here

    // create a suffix sum vector in which each element equals the sum of all heading elements
    vector<int> suffixSum(A.size()+1 , 0);

    for(int i = A.size()-1; i >= 0; i--)
    {
        suffixSum[i] = suffixSum[i+1] + A[i];
    }

    long long int numOfPassingCars{0};
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] == 0)
        {
            numOfPassingCars += suffixSum[i];
        }
    }

    if(numOfPassingCars > 1000000000)
    {
        return -1;
    }

    return  numOfPassingCars;
}