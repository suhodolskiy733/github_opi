#include <iostream>
#include <array>
#include <cmath>
#include <iomanip>

int main() {
    int N;
    std::cout << "Введіть кількість елементів послідовності: ";
    std::cin >> N;

    std::array<float, 100> x;
    float M = 0;
    std::array<float, 100> S = {0};

    std::cout << "Введіть " << N << " дійсних чисел:\n";
    for (int i = 0; i < N; ++i) {
        std::cin >> x[i];
        M += x[i];
    }
    M /= N;

    for (int i = 0; i < N; ++i) {
        S[i] = std::sqrt(std::pow(x[i] - M, 2) / (N - 1));
        std::cout << "S_" << i << " = " << std::fixed << std::setprecision(2) << S[i] << std::endl;
    }

    return 0;
}
