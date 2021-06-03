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
//https://leetcode.com/contest/weekly-contest-241/problems/minimum-number-of-swaps-to-make-the-binary-string-alternating/
class Solution {
public:
    int minSwaps(string s) {
        int n=s.size();
        int toggle=-1;
        int x=1; int count=0;
        //cout<<s[0]<<(int)s[0]<<" "<<x <<" "<<((int)s[0]!=x)<<endl;
        if(((int)s[0]-48)!=x){
            x=0;toggle=1;
        }

        for (int i=0; i<n;i++){
            //x=(char)s[0];
            cout<<s[i]<<" ^"<< x<<"="<<(char)(s[i] ^ x)<<(int)(s[i] ^ x)<<(s[i] ^ x)<<((s[i] ^ x)-48)<<"-->"<<count<<endl;
            if((char)(s[i] ^ x)=='1'){
                count++;
            }
            x+=toggle;
            toggle*=-1;
        }
        cout<<count<<endl;
        if(count==0) return 0;
        else if(count %2==0) return ceil(count/2);
        else return -1;
    }
};


bool solve()
{
    string s;
    cin>>s;
    Solution sln;
    if (s.rfind("//", 0) == 0) {
        return false;
    }
    auto res = sln.minSwaps(s);
    cout << "Case #"<<c<<": "<<s<<" ==> "<<res<< endl;
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
            cerr<<"Error/skipped	#" <<c<< endl;
        }
        c++;
    }
	//Compare file
	clog << "-----	End:Main		----------------------"<<endl;
    cerr << "-----  End:Main        ----------------------"<<endl;
  	return 0;
}