// TapeEquilibrium solution: O(n) solution!

// you can use includes, for example:
// #include <algorithm>
#include <cmath>
#include <climits>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(std::vector<int> &A) {
    // Get total sum of A elements
    int totalA = 0;
    auto A_it = A.begin();
    while (A_it != A.end()) {
        totalA += *A_it;
        A_it++;
    }

    int lowestSf = INT_MAX;
    int N = A.size();
    int total1 = 0;
    int total2 = totalA;
    for (int P = 0; P < N - 1; P++) { 
        total1 += A[P];
        total2 -= A[P];
        int diff = abs(total1 - total2);
        if (diff < lowestSf) lowestSf = diff;
    }

    return lowestSf;
}