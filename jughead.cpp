/*------------------------------------
Author : Vibhu Gautam 
Date = 25/09/2021
Time = 19:23:19
------------------------------------*/
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define ld long double
#define oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define all(x) x.begin() , x.end()
#define rall(x) x.rbegin() , x.rend()
#define sz(x) (ll)x.size()
#define ook order_of_key
#define fbo find_by_order
#define pb push_back
const ll mod = 998244353 , M = 1e9 + 7 , INF = 1e18;
const ll N = 1e6 + 6;
 
 
 
void solve()
{
    ll n;
    cin >> n;

    // cout << (n & (~(n + 4))) << '\n';
    if(n == 1)
    {
        cout << "Alice\n";
        return;
    }
    if(n == 2)
    {
        cout << "Bob\n";
        return;
    }
    if((n & (~(n - 1))) == n or (n & (~(n + 1))) == n)
        cout << "Alice\n";
    else if((n & (~(n + 2))) == n or (n & (~(n + 3))) == n)
        cout << "Bob\n";
    else 
    {
        if(n & 1)
        {
            --n;
            ll x = 0;
            while(n)
            {
                ll y = 0;
                while(!(n & 1))
                    n >>= 1 , ++y;
                --n;
                if(y >= 2)
                    ++x;
            }
            if(x >= 2)
                cout << "Bob\n";
            else 
            {
                if(!x)
                    cout << "Alice\n"; 
                else 
                    cout << "Bob\n";
            }           
        }   
        else 
        {
            ll x = 0;
            while(n)
            {
                ll y = 0;
                while(!(n & 1))
                    n >>= 1 , ++y;
                --n;
                if(y >= 2)
                    ++x;
            }
            if(x >= 2)
                cout << "Alice\n";
            else
            {
                if(!x)
                    cout << "Bob\n";
                else 
                    cout << "Alice\n";
            } 
                    
        }
    }
    
} 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); 

    #ifdef LOCAL
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;
    for(int it=1;it<=t;it++)
    {	
        // cout << "Case #" << it << ": ";
        solve();
    }
return 0;
}
