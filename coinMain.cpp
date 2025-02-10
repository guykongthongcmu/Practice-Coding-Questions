// solution for coin change problem

#include <iostream>
#include <vector>

using namespace std;


int sol(vector<int> coins, int n) {
    vector<int> combo(n + 1, 0);
    combo[0] = 1;

    for (int i = 0; i < coins.size(); i++) {
        for (int j = coins[i]; j <= n; j++) {
            combo[j] += combo[j - coins[i]];
        }
    }
    return combo[n];
}

int main() {
    vector<int> testArr;
    testArr.push_back(2);
    testArr.push_back(5);
    testArr.push_back(3);
    testArr.push_back(6);
    cout << sol(testArr, 10) << endl;
    return 0; 
}

