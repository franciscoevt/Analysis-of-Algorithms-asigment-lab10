#include <iostream>
#include <vector>
using namespace std;

int fib(int n, vector<int>& memo) {
    if (memo[n] != -1)
        return memo[n];

    if (n == 1 || n == 2)
        return memo[n] = 1;

    return memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
}

int main() {
    int n;
    cin >> n;

    vector<int> memo(n + 1, -1);
    cout << fib(n, memo) << endl;

    return 0;
}
