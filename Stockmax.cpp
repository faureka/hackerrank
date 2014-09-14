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

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int N;
		cin >> N;
		long stock[N],profit=0,count=0,buyst,maxN = LONG_MIN,maxStockarr[N];
		for (int j = 0; j < N; ++j)
		{
			cin >> stock[j];
		}
		//k = N-1;
		for (int k = N-1; k >=0; --k)
		{	
			if(stock[k] > maxN)
				maxN = stock[k];
			maxStockarr[k] = maxN;
		}
		for(int k = 0; k< N;k++){
			if(stock[k] < maxStockarr[k]){
				profit -= stock[k];
				count++;
			}
			else if(stock[k] == maxStockarr[k]){
				profit += count*maxStockarr[k];
				count = 0;
			}
		}
		cout << profit << "\n";
	}
	//	cout << profit <<"\n";
	return 0;
}
