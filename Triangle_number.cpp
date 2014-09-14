#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i){
        long int n;
        cin >> n;
        if( n % 4 == 0)
            cout << "3" <<endl;
        else if ( n % 4 == 2)
            cout << "4" <<endl;
        else if( n % 4 == 3 || n % 4 == 1)
            cout << "2" <<endl;
    }
    return 0;
}