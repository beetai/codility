// PermMissingElem second solution
// you can use includes, for example:
// #include <algorithm>
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    if (A.empty()) return 1;
    sort(A.begin(), A.end());
    int N = A.size();
    if (*A.begin() != 1) return 1;
    auto A_it = A.begin();
    while (A_it != A.end()) {
        // std::cout << *A_it << std::endl;
        if (*(A_it + 1) != (*A_it + 1)) {
            return *A_it + 1;
        }
        A_it++;
    }
    return N + 1;
}