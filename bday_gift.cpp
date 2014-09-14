#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <map>
#include <vector>
#include <list>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <cmath>
#include <cassert>
#include <climits>

using namespace std;

typedef unsigned long long ull;

int main()
{
	int t;
	ull val;
	double sum = 0;
	for (int i = 0; i < t; ++i)
	{
		cin >> val;
		sum += val;
	}
	printf("%0.1f",sum/2);
	return 0;
}