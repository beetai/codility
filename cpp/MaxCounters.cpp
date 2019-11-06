// MaxCounters solution: O(n*m) runtime
// Because max_element and fill is O(N)

// you can use includes, for example:
// #include <algorithm>
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(int N, vector<int> &A) {    
    // initialize vector of size N with all zero elements, call retVal
    std::vector<int> retVal(N, 0);
    
    int maxCount = 0;
    auto A_it = A.begin();
    while (A_it != A.end()) {
        if (*A_it == N + 1) {
            maxCount += *max_element(retVal.begin(), retVal.end());
            fill(retVal.begin(), retVal.end(), 0);
        } else {
            retVal[*A_it - 1]++;
        }
        A_it++;
    }
    
    // put in all max counters at the end
    auto ret_it = retVal.begin();
    while (ret_it != retVal.end()) {
        *ret_it += maxCount;
        ret_it++;
    }
    return retVal;
}
