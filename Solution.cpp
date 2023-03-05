
using namespace std;

class Solution {
public:
    long long coloredCells(int n) const {
        return 1 + 2 * static_cast<long long> (n) * (n - 1);
    }
};
