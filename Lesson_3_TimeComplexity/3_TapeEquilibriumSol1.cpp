#include <numeric>
using namespace std;

int solution(vector<int> &A) {
	// Implement your solution here
	
	// we need two for loops to get the full solution
	// First one to get the full sum
	long long int totalSum{accumulate(A.begin(), A.end(), 0LL)};
	long long int leftSum{A[0]};
	long long int minDiff{abs(totalSum - (2 * leftSum))};
	
	for (unsigned int i = 1; i < A.size()-1; i++)
	{
		leftSum += A[i];
		minDiff = min(minDiff, abs(totalSum - (2 * leftSum)));
	}
	return minDiff;
}