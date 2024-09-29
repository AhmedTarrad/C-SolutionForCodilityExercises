#include <iostream>

int solution(int N) {
    // Skip the trailing zeros (right-most zeros) to start with a '1'
    while (N > 0 && (N & 1) == 0) {
        N >>= 1;
    }
    
    int maxGap = 0;    // The maximum gap found
    int currentGap = 0; // The current gap being counted

    // Iterate over the binary representation of N
    while (N > 0) {
        if (N & 1) {  // If we encounter a '1'
            // Update the maximum gap
            if (currentGap > maxGap) {
                maxGap = currentGap;
            }
            currentGap = 0; // Reset the current gap counter
        } else {  // If we encounter a '0'
            currentGap++;  // Increment the current gap length
        }
        N >>= 1;  // Right-shift N to check the next bit
    }

    return maxGap;
}

int main() {
    int N = 1041;
    std::cout << "Longest binary gap: " << solution(N) << std::endl;
    return 0;
}