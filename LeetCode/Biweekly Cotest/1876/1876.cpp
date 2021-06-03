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
//https://leetcode.com/contest/biweekly-contest-53/problems/substrings-of-size-three-with-distinct-characters/
//1876. Substrings of Size Three with Distinct Characters
class Solution {
public:
    int countGoodSubstrings(string s) {
        int ret=0;
        if(s.size()<3){
            return ret;
        }
        
        for(int i=0; i<s.size()-2; i++){
            if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2]){
                //cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
                ret++;
            }
        }

        return ret;
    }    
};


bool solve()
{
    string s;
    cin>>s;
    Solution sln;
    auto res = sln.countGoodSubstrings(s);
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