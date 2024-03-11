// C++ program to print sum of all possible substring of
// a number represented as a string
#include <bits/stdc++.h>
using namespace std;

// Utility method to convert character digit to
// integer digit
int toDigit(char ch) { return (ch - '0'); }

// Returns sum of all substring of num
int sumOfSubstrings(string s)
{
	vector<int> v;
	int n = s.length();
	for (int i = 0; i < n; i++) {
		for (int len = 1; len <= n - i; len++) {
			string sub = (s.substr(i, len));
			int x = stoi(sub);
			v.push_back(x);
		}
	}
	int res = accumulate(v.begin(), v.end(), 0);

	return res;
}

// Driver code to test above methods
int main()
{
	string num = "1234";
	cout << sumOfSubstrings(num) << endl;
	return 0;
}
