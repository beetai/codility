// you can use includes, for example:
// #include <algorithm>
#include <unordered_map>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    std::unordered_map<int, bool> unpaired;
    auto A_it = A.begin();
    while (A_it != A.end()) {
        if (!unpaired[*A_it]) {
            unpaired[*A_it] = true;
        } else {
            unpaired[*A_it] = false;
        }
        A_it++;
    }
    for (auto const& pair: unpaired) {
        if (pair.second)
            return pair.first;
    }
    return 0;
}
