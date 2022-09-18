#include <iostream>
 
int main(){
    long long N;
    std::cin >> N;
    
    long long ans = (N %  998244353 + 998244353) % 998244353;
    std::cout << ans << std::endl;
 
    return 0;
}