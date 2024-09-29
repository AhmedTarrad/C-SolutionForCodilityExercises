// you can use includes, for example:
#include <algorithm>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // Implement your solution here
    int maxGap{0};
    int gapCount{0};
    bool startCount{false};

    while (N > 0)
    {
        int reminder = N % 2;
        N /= 2;

        if (reminder == 1)
        {
            if(!startCount)
            {
                // start a new gap
                startCount = true;
                gapCount = 0;
            }
            else
            {
                // end an existing gap 
                maxGap = max(maxGap, gapCount);
                gapCount = 0;
            }
            
        }
        else if(startCount)
        {
            gapCount++;
        }
        else {
            // do nothing, reminder is zero without leading one
        }
    }

    return maxGap;
}
