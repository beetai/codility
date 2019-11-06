/* FIRST DRAFT FOR SOLUTION TO PermMissingElem: DOES NOT WORK */
#include <iostream>
#include <algorithm>
#include <vector>

int findMissingNum(std::vector<int> &A) {
    if (A) {
        return 0;
    }
    int halfInd = A.size() / 2;
    std::vector<int> split_lo(A.begin(), A.begin() + halfInd);
    std::vector<int> split_hi(A.begin() + halfInd, A.end());
    std::cout << *split_hi.begin() << std::endl;
    std::cout << *(split_hi.end() - 1) << std::endl;
    std::cout << *split_lo.begin() << std::endl;
    std::cout << *(split_lo.end() - 1) << std::endl;
    int hi_first = *split_hi.begin();
    int hi_last = *(split_hi.end()-1);
    int lo_first = *split_lo.begin();
    int lo_last = *(split_lo.end()-1);
    std::cout << split_hi.size() << std::endl;
    std::cout << split_lo.size() << std::endl;
    if ((hi_last - hi_first) == split_hi.size()) {
        return findMissingNum(split_hi);
    } else if ((lo_last - lo_first) == split_lo.size()) {
        return findMissingNum(split_lo);
    } else {
        return hi_last + 1;
    }
}

int solution(std::vector<int> &A) {
    sort(A.begin(), A.end());
    auto A_it = A.begin();
    while (A_it != A.end()) {
        // std::cout << *A_it << std::endl;
        A_it++;
    }
    findMissingNum(A);
    return 0;
}

int main() {
    std::vector<int> A{2,3,1,5};
    std::cout << solution(A) << std::endl;
}