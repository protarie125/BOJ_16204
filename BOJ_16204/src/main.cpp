#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, fo, bo;
	cin >> n >> fo >> bo;

	auto fx = n - fo;
	auto bx = n - bo;

	auto answer = int{ 0 };
	answer += (fo < bo ? fo : bo);
	answer += (fx < bx ? fx : bx);

	cout << answer;

	return 0;
}