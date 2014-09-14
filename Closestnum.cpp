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

vector<long long> res;

int main()
{
	int n;
	cin >> n;
	vector<long long> v;
	 long long temp;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	long long mindiff = INT_MAX;
	for (int i = 0; i < n-1; ++i)
	{
		if(abs(v[i]-v[i+1]) < mindiff)
			mindiff = abs(v[i]-v[i+1]);
	}
	for (int i = 0; i < n-1; ++i)
	{
		if(abs(v[i]-v[i+1]) == mindiff){
			res.push_back(v[i]);
			res.push_back(v[i+1]);
		}
	}
	for (int i = 0; i < (int)res.size(); ++i)
	{
		cout << res[i] << " ";
	}
	return 0;
}