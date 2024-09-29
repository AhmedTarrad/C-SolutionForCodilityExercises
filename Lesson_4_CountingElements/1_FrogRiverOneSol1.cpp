#include <vector>
using namespace std;

int solution(int X, vector<int> &A) {
	// Implement your solution here
	vector<int> trackSteps(X, 0);
	int numCoveredSteps{0};
	int minTime{-1};
	int sizeA{(int)A.size()};
	
	for (int i = 0; i < sizeA; i++)
	{
		if(trackSteps[A[i]-1] == 0)
		{
			trackSteps[A[i]-1] = 1;
			numCoveredSteps++;
			if(numCoveredSteps == X)
			{
				minTime = i;
			}
		}
	}
	return minTime;
}