#include <iostream>

int count(int k, int n) {

    if (n == 0) {

        return 1;

    }        

    int n_count = 0;

    for (int i = 1; i <= n; ++i) {

        n_count += count(k, n - i);

    }         

    return n_count;
}
int main() {

    int jump;
    int step_length;
    
    std::cout << "Enter max length jump: ";
    std::cin >> jump;

    std::cout << "Enter the maximum number of steps: ";
    std::cin >> step_length;

    std::cout << count(jump, step_length);


    return 0;
}