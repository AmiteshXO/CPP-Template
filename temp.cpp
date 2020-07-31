#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define mod 1000000007
#define FOR(a,c)   for ( long long int (a)=0; (a)<(c); (a)++)
#define FORL(a,b,c)  for ( long long int (a)=(b); (a)<=(c); (a)++)
#define FORR(a,b,c)  for (  long long int (a)=(b); (a)>=(c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<long long int> vi;
typedef pair<long long int,long long int> pi;
typedef priority_queue<long long int> max_pq;
typedef priority_queue<long long int, vector<long long int>, greater<long long int>> min_pq;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
#define pi 3.1415926535
#define buff cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define MOD 1000000007
#define endl '\n'
#define all(v) v.begin(),v.end()
 
// Use inbuilt function  __gcd(a,b), __builtin_popcount(n), Use (x&-x) for last set Bit;
 
// ---------------------------------BFS & DFS-------------------------------------------------
 
// vector<int> adj[500005];
//  ll visited[200005];
//  ll level[200005];
 
//  map<ll,ll> mp;
 
// vector<int> da(n, INF);
 
// void bfs(int s, vector<int> &d) { 
//     d[s] = 0;
//     queue<int> q;
//     q.push(s);
//     while (!q.empty()) {
//         int v = q.front();
//         q.pop();
//         for (auto to : g[v]) {
//             if (d[to] == INF) {
//                 d[to] = d[v] + 1;
//                 q.push(to);
//             }
//         }
//     }
// }
 
// void dfs(ll r)
// {
//     visited[r] = 1; 
   
//     for (ll i=0;i<adj[r].size();++i) 
//         if (!visited[adj[r][i]]) 
//             {
//                 level[adj[r][i]]=level[r]+1;
//                 mp[level[adj[r][i]]]++;
//                 dfs(adj[r][i]); 
//             }
// }
 
// ------------------------------FIND DIVISORS----------------------------------------------
 
// vector<ll> divi(ll n)
// {
//     vector<ll> v;
//     for(ll i=2;i<=sqrt(n);i++)
//     {
//         if(n%i==0)
//         {
//             v.PB(i);
//             if(n/i!=i)
//                 v.PB(n/i);
//         }
//     }
//     return v;
// }
 
// --------------------------------PRIME FACTORS----------------------------------------------
 
// vi v;
// void pf(ll n)  
// {  
//     while (n % 2 == 0)  
//     {  
//         v.PB(2); 
//         n = n/2;  
//     }  
//     for (ll i = 3; i <= sqrt(n); i = i + 2)  
//     {    
//         while (n % i == 0)  
//         {  
//             v.PB(i); 
//             n = n/i;  
//         }  
//     }  
//     if (n > 2)  
//         v.PB(n);  
// }  
 
// ---------------------------------FAST POWER----------------------------------------------------
 
// long long fast_power(long long base, long long power) {
//     long long result = 1;
//     while(power > 0) 
//     {
 
//         if(power&1)
//         { 
//             result = (result*base) % MOD;
//         }
//         base = (base * base) % MOD;
//         power >>= 1; 
//     }
//     return result;
// }
 
// -----------------------------------COMPARATOR----------------------------------------------------
 
// bool cmp(const pair<pair<ll,ll>,ll> a, const pair<pair<ll,ll>,ll> b)
// {
//     // if(a.S == b.S)
//     //     return a.F<b.F;
//     return a.F.S<b.F.S;
// }

// ---------------------------------------DISJOINT-SET-UNION------------------------------------------

// struct dsu
// {
//     vector<ll> p;
//     void init(ll n)
//     {
//         p.clear();
//         p.resize(n);
//         iota(p.begin(),p.end(),0);
//     }

//     ll get(ll x)
//     {
//         return ((p[x]==x) ? x : p[x]=get(p[x]));
//     }

//     void unite(ll x, ll y)
//     {
//         x = get(x);
//         y = get(y);
//         if(x!=y)
//         {
//            p[x]=y;
//         }
//     }
// };

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

     
    
    return 0;
}
