// Author: Tahir98
// problem link : https://codeforces.com/contest/2072/problem/F
// submission link :https://codeforces.com/contest/2072/submission/307776206
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define no cout<<"No"<<endl
#define yes cout<<"Yes"<<endl
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define pb push_back
#define endl '\n'
#define tahirchiiik ios_base::sync_with_stdio(0); cin.tie(0)
const int mod = 1e9+9;
const int N = 2e5+5;
const int INF = 1e18;
int gcd(int a, int b){
    return b ? gcd(b,a%b) : a;
}
int lcm(int a, int b){
    return a*b/gcd(a,b);
}
int poww(int a, int b){
    int ans = 1;
    while(b--) ans*=a;
    return ans;
}
void solve(){
    int n,k; cin>>n>>k;
    int x = n-1;
    for(int i  = 0;i<n;i++){
        if((i&x)==i) cout<<k<< ' ';
        else cout<<0<< ' ';
    }
    cout<<endl;
}
signed main()
{
    tahirchiiik;
    int T = 1;
    cin>>T;
    while(T--) solve();
}