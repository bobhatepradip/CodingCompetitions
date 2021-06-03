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
//1877. Minimize Maximum Pair Sum in Array
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL);
        cout.tie(NULL);
        
        
        int ret=0;
        int n=nums.size();
        if(n==0) return ret;
        int i=0; int j=n-1;
        sort(nums.begin(), nums.end());
        while(i<j){
            ret= max(ret,nums[i]+nums[j]);
            i++;j--;
        }
        
        return ret;
    }
};

//sort(nums.begin(), nums.end(), greater<int>());
vector<int> copyTo(string str)
{
    vector<int> vect;

    stringstream ss(str);

    for (int i; ss >> i;) {
        vect.push_back(i);    
        if (ss.peek() == ',')
            ss.ignore();
    }

    // for (size_t i = 0; i < vect.size(); i++)
    //     cout << vect[i]<<"-"<<(int)vect[i] << endl;

    return vect;
}

bool solve()
{
    string s;
    cin>>s;
    //start: trasformation of input parameters
    vector<int> v;
    v=copyTo(s);
    //end: trasformation of input parameters

    Solution sln;
    auto res = sln.minPairSum(v);
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

