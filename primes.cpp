#include <iostream>
#include <chrono>
using namespace std;

bool is_prime(int number) {
    if (number == 2) { 
        return true;
    }
    else if (number <= 1) {
        return false;
    }
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
        else {
            continue;
        }
    }
    return true;
}

void prime_finder(int starting_number, int ending_number) {
    int i = starting_number;
    int total_primes = 0;
    while (i <= ending_number) {
        if (is_prime(i)) {
            cout << "Prime Found:" << "[" << i << "]" << endl;
            total_primes++;
        }
        i++;
    }
    cout << "Total Primes Found: " << total_primes << endl;
    cout << "---End---" << endl;
}

int main() {
    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;
    int starting_number;
    int ending_number;
    cout<< "Enter Starting Number: ";
    cin >> starting_number;
    cout << "Enter ending number: ";
    cin >> ending_number;
    auto t1 = high_resolution_clock::now();
    prime_finder(starting_number, ending_number);
    auto t2 = high_resolution_clock::now();
    duration<double, std::milli> ms_double = t2 - t1;
    cout << "\n[Execution Time: " << ms_double.count() << "ms]\n" << endl;
    return 0;
}

