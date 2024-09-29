#include <numeric>
#include <vector>
using namespace std;

int solution(vector<int> &A) {
	// Implement your solution here
	if(A.empty())
	{
		return 1;
	}
	unsigned int N{static_cast<unsigned int>(A.size);
	
	// First get the expected sum if no element is missed
	unsigned int expectedSum{((N+1) * (N+2)) / 2}};
	unsigned int actualSum{accumulate(A.begin(), A.end(), 0U)};
	
	return expectedSum - actualSum;
}