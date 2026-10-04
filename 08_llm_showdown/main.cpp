
#include <bits/stdc++.h>
using namespace std;

inline double calculate(uint64_t iterations, double param1, double param2) {
    double result = 1.0;
    for (uint64_t i = 1; i <= iterations; ++i) {
        double j = i * param1 - param2;
        result -= 1.0 / j;
        j = i * param1 + param2;
        result += 1.0 / j;
    }
    return result;
}

int main() {
    const uint64_t iterations = 200'000'000ULL;
    const double param1 = 4.0;
    const double param2 = 1.0;

    auto start = chrono::high_resolution_clock::now();
    double result = calculate(iterations, param1, param2) * 4.0;
    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> elapsed = end - start;

    cout.setf(ios::fixed);
    cout << setprecision(12) << "Result: " << result << '\n';
    cout << setprecision(6) << "Execution Time: " << elapsed.count() << " seconds\n";
    return 0;
}

