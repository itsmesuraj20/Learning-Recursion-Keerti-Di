#include <iostream>
#include <chrono>

int calculatepower1(int x, int n) {
    if (n == 0) return 1;
    return x * calculatepower1(x, n - 1);
}

int calculatepower2(int x, int n) {
    if (n == 0) return 1;
    int temp = calculatepower2(x, n / 2);
    int ans = temp * temp;
    if (n % 2 == 1) {
        ans = ans * x;
    }
    return ans;
}

int main() {
    auto starttime1 = std::chrono::high_resolution_clock::now();
    std::cout << calculatepower1(2, 1000) << std::endl;
    auto finishtime1 = std::chrono::high_resolution_clock::now();
    double elapsed_time_ms1 = std::chrono::duration<double, std::milli>(finishtime1 - starttime1).count();
    std::cout << "Time taken in the first function is: " << elapsed_time_ms1 << " milliseconds" << std::endl;

    auto starttime2 = std::chrono::high_resolution_clock::now();
    std::cout << calculatepower2(2, 1000) << std::endl;
    auto finishtime2 = std::chrono::high_resolution_clock::now();
    double elapsed_time_ms2 = std::chrono::duration<double, std::milli>(finishtime2 - starttime2).count();
    std::cout << "Time taken in the second function is: " << elapsed_time_ms2 << " milliseconds" << std::endl;

    return 0;
}
