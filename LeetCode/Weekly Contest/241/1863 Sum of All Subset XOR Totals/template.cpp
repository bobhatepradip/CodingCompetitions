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
////////////////////////////////
vector<int> copyTo(string str);
/////////////////////////
ll c=1;
//////////////////////////
//https://leetcode.com/submissions/detail/499036330/
class Solution {
public:
    int subsetXORSum2(vector<int>& nums, int curr=0 , int k=0, string s="")
    {        
        int sum=curr;
        // if(k<=nums.size()-1){
        //   //cout <<"**curr:"<<curr<<" k:"<<k<<" nums[k]:"<<nums[k]<<" sum:"<<sum<<" s:"<<s<<endl; 

        //   s+="-"+to_string(nums[k])  ;      
        // }
        
        for(int i=k;i<nums.size();i++){
            cout<<nums[k]<<" to "<< nums[i]<<endl;
            s+="="+to_string(nums[i]) ; 
          //   if(i==k){
          //   cout <<"curr:"<<curr<<" ^ "<<" nums[i]:"<<nums[i]<<" nums[k]:"<<nums[k]<<" k:"<<k<<" nums[i]^0:"<<(nums[i]^0)<<endl; 
          
          // }else{
          //   cout <<"curr:"<<curr<<" ^ "<<" nums[i]:"<<nums[i]<<" nums[k]:"<<nums[k]<<" k:"<<k<<" curr^nums[i]:"<<(curr^nums[i])<<endl; 
          // }
          sum+=subsetXORSum2(nums, curr^nums[i], i+1,s);
          // if(i==k){
          //   cout <<"$$curr:"<<curr<<" nums[k]:"<<nums[k]<<" nums[i]:"<<nums[i]<<" "<<nums[k]<<" ^ "<<0<<" = "<<(nums[k]^0) <<" sum:"<<sum<<" s:"<<s<<endl; 
        
          // }else{
          //   cout <<"$$curr:"<<curr<<" nums[k]:"<<nums[k]<<" nums[i]:"<<nums[i]<<" "<<nums[k]<<" ^ "<<nums[i]<<" = "<<(nums[k]^nums[i]) <<" sum:"<<sum<<" s:"<<s<<endl; 
          //   }
        }
            return sum;     
        
    }
    int subsetXORSum(vector<int>& nums) {
        int ret= subsetXORSum2(nums);
        return ret;
    }
};
// class Solution {
// public:
//     int subsetXORSum(vector<int>& nums) {
//         int n=nums.size();
//         int curXOR;
//         int sum=0;
//         string newPattern;
//         for (int i=0; i<n; i++) {
//             newPattern="";
//             //newPattern+=to_string(nums[i])+"- ";
//             for(int j=i;j<n;j++) {
//                 if(i==j){
//                     curXOR= nums[i] ^ 0;                    
//                 }else{
//                     curXOR= nums[i] ^ nums[j];
//                 }
//                 cout<<i<<"-"<<j<<" : "<< nums[i]<<"^"<<nums[j]<<" = "<<curXOR << endl;;
//                 sum+=curXOR;
//                 newPattern+="+"+to_string(nums[i])+" ^ "+to_string(nums[j]);
//             }
//             cout <<"newPattern:"<<newPattern<<endl;
//         }
//         cout <<"sum-"<<sum<<endl;

//         int sNumm =0;
//         // sNumm =nums[0];
//         // for (int i=1; i<n; i++) {
//         //     sNumm =nums[i] ^ sNumm;
//         // }
//         cout <<"sNumm-"<<sNumm<<endl;
//         return sum + sNumm;
//     }
// };

bool solve()
{

    string s;
    cin>>s;
    vector<int> v;
    v=copyTo(s);
    //copy(s.begin(), s.end(),back_inserter(v));
        //, [](int i){return !(i<0);} );
    
    Solution sln;
    auto res = sln.subsetXORSum(v);
    cout << "Case #"<<c<<": "<<s<<"-"<<res<< endl;
    return true;    
}



int main() {
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cerr.tie(NULL);
    clog.tie(NULL);
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