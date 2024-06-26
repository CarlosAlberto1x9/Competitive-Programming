#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> subset;

void search(int k) {
	if (k == n+1) {
		cout << "{ ";
		for (auto& i: subset) cout << i << ' ';
		cout << "}\n";
	} else {
		search(k+1);
		subset.push_back(k);
		search(k+1);
		subset.pop_back();
	}
}

int main()
{
	cin >> n;
	search(1);

	return 0;
}