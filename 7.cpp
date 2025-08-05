#include <iostream>

int main(){
    int n = 0, h = 0, m = 0;
    std::cin >> n;
    n = n % (24 * 60);
    h = n / 60;
    m = n % 60;
    std::cout << h << " " << m;
}