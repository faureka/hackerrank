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
/*Template Part begins, only the important ones. */

#define all(v) v.begin(),v.end()
#define read(a) freopen("a.txt","r",stdin)
#define write(b) freopen("b.txt","w",stdout)

#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))

#define pb push_back
#define mk make_pair

#define REV(x) reverse(x.begin(),x.end())
#define SORT(v) sort(all(v))

#define UN(v) SORT(v), (v).earse(unique(all(v)),v.end())
#define common(a,b) SORT(a), SORT(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) SORT(a), SORT(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())

#define FILL(a,d) memset(a,d,sizeof(a))
#define LL long long
#define PI 2*acos(0.0)
#define pi pair<int,int>
#define MAXM 2147483647
#define MAXML 9223372036854775807LL
#define MOD 1000000007

LL gcd(LL a, LL b){if(a==0)return(b);else return(gcd(b%a,a));}
LL fastpow(LL a, LL n, LL temp){if(n==0) return(1);if(n==1)return((a*temp)%MOD); if(n&1)temp=(temp*a)%MOD;return(fastpow((a*a)%MOD,n/2,temp));}
/*Template part gets over, finally. */
int main()
{
	LL n,k,val;
	int count;
	cin >> n >> k;
	set<LL>arr;
	set<LL>::iterator it;
	for (LL i = 0; i < n; ++i)
	{	
		cin >> val;
		arr.insert(val);
	}
	for(it = arr.begin();it != arr.end(); ++it)
	{
		if(find(*it + k) != arr.end())
			count++;
	}
	cout << count << "\n";

	return 0;
}