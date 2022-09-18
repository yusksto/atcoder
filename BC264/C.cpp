#include <iostream>
#include <vector>
#include <string>
#include <map>

int main() {
	int n;
	std::cin >> n;
	std::map<std::string, int>cnt;
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		if (cnt[s] == 0)std::cout << s << std::endl;
		else std::cout << s << "(" << cnt[s] << ")" << std::endl;
		cnt[s]++;
	}
}
//AC