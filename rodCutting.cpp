// solution for rod cutting problem

#include <iostream>
#include <vector>
using namespace std;

int sol(int n, int prices[]) {
    vector<int> maxRev(n + 1, 0);
    maxRev[0] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i ; j++) {
            maxRev[i] = max(maxRev[i],prices[j] + maxRev[i - j - 1]);
        }
    }

    return maxRev[n];
}

int main() {
    int prices[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = 8;
    int result = sol(n, prices);
    cout << result << endl;
    return 0;
}
