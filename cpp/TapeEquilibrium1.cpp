// TapeEquilibrium solution: O(n*n) solution!
// you can use includes, for example:
// #include <algorithm>
#include <cmath>
#include <climits>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int sumVector(std::vector<int> &A) {
    int retVal = 0;
    auto A_it = A.begin();
    while (A_it != A.end()) {
        retVal += *A_it;
        A_it++;
    }
    return retVal;
}

int solution(std::vector<int> &A) {
    int lowestSf = INT_MAX;
    int N = A.size();
    for (int P = 1; P < N; P++) { 
        std::vector<int> split_lo(A.begin(), A.begin() + P);
        std::vector<int> split_hi(A.begin() + P, A.end());
        int diff = abs(sumVector(split_lo) - sumVector(split_hi));
        if (diff < lowestSf) lowestSf = diff;
    }

    return lowestSf;
}