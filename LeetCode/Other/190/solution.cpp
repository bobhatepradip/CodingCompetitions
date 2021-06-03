#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod  = 1e9+7;
const ld eps  = 1e-9 ;
const ll maxn = 1e5+1;
const ll inf  = 1e15 ;
const ll minf = -inf ;

#define mp make_pair
#define pb push_back
#define endl "\n"
/////////////////////////
ll c=1;
//////////////////////////
/*
https://leetcode.com/submissions/detail/499036330/
172. Factorial Trailing Zeroes
*/
class Solution {
public:
    int trailingZeroes(int n) {
        int cnt = 0;
        while(n > 0)
        {
            cnt += n / 5;
            n /= 5;
        }
        return cnt;
    }
};
/*
Algo 2:
Comment:
以iter實作。
時間複雜度：Ｏ(log n)
空間複雜度：Ｏ(log n)
*/

/*
Algo 1:
class Solution {
public:
    int trailingZeroes(int n) {
        return n == 0 ? 0 : n / 5 + trailingZeroes(n / 5);
    }
};
Comment:
找2*5的組合最多個數(0從2*5來)
因為階乘中2必定比5多，所以只要找5有幾個即可。
5個數 = 5的倍數個數 + 25的倍數個數 + ... = n/5 + n/25 + n/125 + ....
以遞迴實作。
時間複雜度：Ｏ(log n)
空間複雜度：Ｏ(log n)
*/
//O(Log n)
class Solution2 {
public:
    int trailingZeroes(int n) {
        int res;
        for (res = n / 5, n /= 5; n; ) {
            res += n / 5;
            n /= 5;
        }
        return res;
    }
};
class MySolution {
public:
    int trailingZeroes(int n) {
        int ret=0; 
        if(n<=0) return ret;
        int x=1;//f[0]=1, f[1]=1
        for(int i=2; i<=n;i++){
            x*=i;
            cout<<x<<" "<<i<<" "<<((x%10)==0)<<endl;
            
        }
        while(x%10==0){
            ret++;
            x/=10;
        }
        return ret;
    }
};


bool solve()
{
    int s;
    cin>>s;
    Solution sln;
    auto res = sln.trailingZeroes(s);
    cout << "Case #"<<c<<": "<<s<<"-"<<res<< endl;
    return true;    
}



int main() {
	clog << "----	Start:Main		----------------------"<<endl;
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cerr.tie(NULL);
    clog.tie(NULL);

   //  ofstream outfile;
   // outfile.open("afile.dat");

   // cout << "Writing to the file" << endl;
   // cout << "Enter your name: ";
    /////////////////////////////////////////////////////
	// #ifdef EPSILON
	// //freopen("inputf.txt","r",stdin);
	// //freopen("outputf.txt","w",stdout);
	// freopen("logf.in","w",stdlog);
	// freopen("errorf.in","w",stderr);
	// #endif

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
    cerr << "-----  End:Main        ----------------------"<<endl;
  	return 0;
}