/*
202. Happy Number
Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, 
replace the number by the sum of the squares of its digits, and repeat the process until the number 
equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. 
Those numbers for which this process ends in 1 are happy numbers.

Example: 19 is a happy number

1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1
*/
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool judgeMent(int n, vector<int> &map)
{
	if (n < 0)
		return false;
	if (n == 1)
		return true;
	if (n < 10)
		return judgeMent(n * n, map);

	vector<int> bitset;
	for (int mod = 10; mod <= 10 * n; mod *= 10)
		bitset.push_back((n % mod) / (mod / 10));

	int res = 0;
	for (size_t i = 0; i < bitset.size(); ++i)
	{
		res += bitset[i] * bitset[i];
	//	cout << bitset[i] << "^2";
	//	if (i != bitset.size() - 1)
	//		cout << " + ";
	}
	//cout << " = " << res << endl;


	if (res == 1)
		return true;
	else if (find(map.begin(), map.end(), res) != map.end())
		return false;
	else
	{
		map.push_back(res);
		return judgeMent(res, map);
	}
}

bool isHappy(int n)
{
	vector<int> map;
	return judgeMent(n, map);
}

int main(int argv, char **argc)
{
	int n;
	while (cin >> n)
		cout << isHappy(n) << '\n' << endl;

	return 0;
}
