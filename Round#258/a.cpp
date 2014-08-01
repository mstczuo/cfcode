# include <iostream>

int n, m;
int main() {
    std::cin >> n >> m;
    if(std::min(n,m) & 1)
        std::cout << "Akshat" << std::endl;
    else
        std::cout << "Malvika" << std::endl;
}
