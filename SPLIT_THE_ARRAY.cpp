#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
ll cache[10020][2][2];
int N;
ll A[10020];
 
ll dp(int i, bool j, bool k) {
 
    if (i >= N)
        return 0;
 
    if (cache[i][j][k] != 1e18)
        return cache[i][j][k];
 
 
    ll val = A[i];
    if ((j + k) & 1)
        val *= -1;
 
    return cache[i][j][k] = max(dp(i + 1, !j, k) + val, dp(i + 1, 1, !k) + val);
 
}
 
int main()
{
 
    int T;
    cin >> T;
    while(T--) {
       cin >> N;
 
    	for (int i = 0; i < N; i++) {
    	    cin >> A[i];
 
    	    cache[i][0][0] = 1e18;
    	    cache[i][0][1] = 1e18;
    	    cache[i][1][0] = 1e18;
    	    cache[i][1][1] = 1e18;
    	}
 
    	cout << dp(0, 1, 1) << "\n";
   }
   return 0;
}