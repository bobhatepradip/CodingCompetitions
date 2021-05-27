// Author : Epsilon573
// If it works, don't touch it.

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod  = 998244353.;
const ld eps  = 1e-9 ;
const ll maxn = 2e5+5;
const ll inf  = 1e15 ;
const ll minf = -inf ;

#define mp make_pair
#define pb push_back
#define endl "\n"

#ifdef EPSILON

    #define deb(args...)       cerr << "[ " #args << " ] : " , debug(args);
    #define debug(args...)     (Debugger()) , args
 
    class Debugger
    {
        public:
        Debugger(const std::string& _separator = ", ") :
        first(true), separator(_separator){}
 
        template<typename ObjectType>
        Debugger& operator , (const ObjectType& v)
        {
            if(!first)
                std::cerr << separator;
            std::cerr << v;
            first = false;
            return *this;
        }
        ~Debugger() {  std::cerr << endl;}
 
        private:
        bool first;
        std::string separator;
    };
 
    template <typename T1, typename T2>
    inline std::ostream& operator << (std::ostream& os, const std::pair<T1, T2>& p)
    {
        return os << "(" << p.first << ", " << p.second << ")";
    }
 
    template<typename T>
    inline std::ostream &operator << (std::ostream & os,const std::vector<T>& v)
    {
        bool first = true;
        os << "[";
        for(unsigned int i = 0; i < v.size(); i++)
        {
            if(!first)
                os << ", ";
            os << v[i];
            first = false;
        }
        return os << "]";
    }
 
    template<typename T>
    inline std::ostream &operator << (std::ostream & os,const std::set<T>& v)
    {
        bool first = true;
        os << "[";
        for (typename std::set<T>::const_iterator ii = v.begin(); ii != v.end(); ++ii)
        {
            if(!first)
                os << ", ";
            os << *ii;
            first = false;
        }
        return os << "]";
    }
 
    template<typename T1, typename T2>
    inline std::ostream &operator << (std::ostream & os,const std::map<T1, T2>& v)
    {
        bool first = true;
        os << "[";
        for (typename std::map<T1, T2>::const_iterator ii = v.begin(); ii != v.end(); ++ii)
        {
            if(!first)
                os << ", ";
            os << *ii ;
            first = false;
        }
        return os << "]";
    }
 
#else
    #define deb(args...)
    #define debug(args...)
#endif

ll fac[maxn];

ll power(ll x, ll y, ll p = mod) 
{ 
    ll res = 1; 
    x = x % p; 
    while (y > 0) { 
        if (y & 1) 
            res = (res * x) % p; 
        y = y >> 1; 
        x = (x * x) % p; 
    } 
    return res%p; 
} 

ll modInverse(ll n, ll p = mod) 
{ 
    return power(n, p - 2, p); 
} 


ll NCR(ll n, ll r, ll p=mod) 
{ 
    if( n < r) return 0;

    if (r == 0 || r == n)
        return 1; 
  
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p; 
}

void comp()
{
    fac[0] = 1; 
    
    for (ll i = 1; i < maxn; i++) 
        fac[i] = (fac[i - 1] * i) % mod; 
}

bool solve()
{
    comp();
    ll n;
    cin >> n;
    
    ll ans = 0;
    for(ll i=1 ; i<=n ; ++i)
    {   
        if( (i&1)==(n&1) ){
            ans += NCR(((n+i)/2)-1,i-1);
        }

        ans %= mod;
    }
    
    ans *= power(power(2,n),mod-2);
    cout << ans%mod << endl; 

    return true;    
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifdef EPSILON
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif

    ll t=1;

    while(t--)
    {
        if(solve())
        {
            // do this;
        }
        else
        {
            // do this;
        }
    }

    return 0;
} 