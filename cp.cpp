#include <bits/stdc++.h>
using namespace std;
// Abhishek kumar 
// Abhi Arya
// aky8507049610


// types and containers
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vc vector<char>
#define vs vector<string> 
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvc vector<vector<char>>
#define vvs vector<vector<string>>
#define vvpii vector<vector<pair<int,int>>>
#define vpii vector<pair<int,int>>
#define vpipii vector<pair<int,pair<int,int>>>
#define vpll vector<pair<long long,long long>>
#define umii unordered_map<int,int> 
#define umll unordered_map<long long , long long>
#define umsi unordered_map<string,int>
#define umis unordered_map<int,string>
#define umls unordered_map<long long,string>
#define umci unordered_map<char,int>
#define umcl unordered_map<char,long long>
#define umic unordered_map<int,char>
#define umlc unordered_map<long long, char>
#define mii map<int,int>
#define mll map<long long , long  long>
#define msi map<string,int>
#define mis map<int,string>
#define mls map<long long,string>
#define mci map<char,int>
#define mcl map<char,long long>
#define mic map<int,char>
#define mlc map<long long, char>
#define usi unordered_set<int> 
#define usl unordered_map<long long>
#define uss unordered_set<string>
#define usc unordered_set<char>
#define si unordered_set<int> 
#define sl unordered_map<long long>
#define ss unordered_set<string>
#define sc unordered_set<char>
#define gi greater<int>
#define pf first
#define ps second
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795l 

// functions
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define fe(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define pp pop_back
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool isPrime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
void pr(int a){cout<<a<<"\n";}
void pr(vector<int>a){for (int i = 0; i < a.size(); i++){cout<<a[i]<<" ";}cout<<endl;}
vector<int> arf(int n,vector<int> &a){f(i,0,n){cin>>a[i];}}
// bits
#define BIT_SET(a,b) ((a) |= (1ULL<<(b)))
#define BIT_CLEAR(a,b) ((a) &= ~(1ULL<<(b)))
#define BIT_FLIP(a,b) ((a) ^= (1ULL<<(b)))
#define BIT_CHECK(a,b) (!!((a) & (1ULL<<(b))))
#define BITMASK_SET(x, mask) ((x) |= (mask))
#define BITMASK_CLEAR(x, mask) ((x) &= (~(mask)))
#define BITMASK_FLIP(x, mask) ((x) ^= (mask))
#define BITMASK_CHECK_ALL(x, mask) (!(~(x) & (mask)))
#define BITMASK_CHECK_ANY(x, mask) ((x) & (mask))


void solve()
{
   // Logic Implementation
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
