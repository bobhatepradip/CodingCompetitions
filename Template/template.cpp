#include <bits/stdc++.h>
using namespace std;

// typedef unsigned long long ull;
 typedef long long ll;
// typedef long double ld;

// const ll mod  = 1e9+7;
// const ld eps  = 1e-9 ;
// const ll maxn = 1e5+1;
// const ll inf  = 1e15 ;
// const ll minf = -inf ;

//  #define mp make_pair
//  #define pb push_back
//  #define endl "\n"
/////////////////////////
ll c=1;
//////////////////////////
bool solve()
{
    cout << "Case #"<<c<<": "<<c-1<< endl;
    // ll n;
    // cin >> n;
    // vector<ll> v(n);

    // for(ll i=0 ; i<n ; ++i) cin >> v[i];

    // ll sum = accumulate(v.begin(),v.end(),0LL);
    // ll mxm = *max_element(v.begin(),v.end());

    // if(sum <= mxm*(n-1))
    //     cout << mxm*(n-1) - sum << endl;
    // else
    // {
    //     if(sum%(n-1) == 0) cout << 0 << endl;
    //     else cout << (n-1) - sum%(n-1) << endl; 
    // }
    
    return true;    
}

int main() {
	clog << "----	Start:Main		----------------------"<<endl;
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cerr.tie(NULL);
    clog.tie(NULL);

	#ifdef EPSILON
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	reopen("errorf.in","w",stdlog);
	freopen("errorf.in","w",stderr);
	#endif

	ll t=1;
    cin >> t;
    
    while(c<=t)
    {
    	clog << "Processing		#" <<c<<endl;
        if(solve())
        {
            clog << "Completed		#" <<c<< endl;
        }
        else
        {
            cerr<<"Error	#" <<c<< endl;
        }
        c++;
    }
	//Compare file
	clog << "-----	End:Main		----------------------"<<endl;
  	return 0;
}