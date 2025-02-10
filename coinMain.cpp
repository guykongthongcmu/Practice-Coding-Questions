#include <iostream>
#include <vector>

using namespace std;

class coin {
    public:
        int n;

        coin(int n) {
            this->n = n;
        }

        int sol(vector<int> coins) {
            vector<int> combo(n + 1, 0);
            combo[0] = 1;

            for (int i = 0; i < coins.size(); i++) {
                for (int j = coins[i]; j <= n; j++) {
                    combo[j] += combo[j - coins[i]];
                }
            }
            return combo[n];
        }
};

int coinMain() {
    vector<int> testArr;
    testArr.push_back(2);
    testArr.push_back(5);
    testArr.push_back(3);
    testArr.push_back(6);
    coin test(10);
    int result = test.sol(testArr);
    cout << result << endl;
    return 0;
}

int main() {
    coinMain();
    return 0; 
}

