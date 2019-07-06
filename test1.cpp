#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1;
	cin >> s2;
	int count = 0;
	for (size_t i = 0; i <= s1.size(); ++i) {
		string ret1 = s1.substr(0, i) + s2 + s1.substr(i, s1.size());
		string ret2(ret1.rbegin(), ret1.rend());
		if (ret1 == ret2) {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}