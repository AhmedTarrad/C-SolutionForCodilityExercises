#include <vector>
using namespace std;


vector<int> solution(int N, vector<int> &A) {
    // Implement your solution here
    vector<int> operationCounter(N, 0);
    int maxCount{0};
    int minValue{0};

    for(auto operation : A)
    {
        if(operation > N)
        {
            minValue = maxCount;
        }
        else
        {
            
            operationCounter[operation-1] = max(minValue, operationCounter[operation-1]) + 1;
            maxCount = max(maxCount, operationCounter[operation-1]);
        }
    }

    for(auto& element : operationCounter)
    {
        element = max(element, minValue);
    }

    return operationCounter;
}