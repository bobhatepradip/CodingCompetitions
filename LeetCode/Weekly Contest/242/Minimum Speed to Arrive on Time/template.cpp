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
//https://leetcode.com/submissions/detail/499036330/
class Solution {
public:
    bool checkZeroOnes(string s) {
        int count0=0,count1=0;
        int x=0,y=0;
        int n=s.size();
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                x=0;
                y++;
                count0=max(y,count0);
            }
            else
            {
                y=0;
                x++;
                count1=max(x,count1);
            }
            
        }
        count0=max(y,count0);
        count1=max(x,count1);
        
        return count1>count0;
    }

    bool checkZeroOnes_My(string s) {
        int one=0;
        int zero=0;
        int cur=0;
        char pre;        

        for(int i=0; i<s.length(); i++){
            if(s[i]==pre){
                //cout <<s[i]<<"---"<<"one:"<<one<<"zero:"<<zero<< endl;
                cur++;
            }else {
                //cout <<s[i]<<"---"<<"one:"<<one<<"zero:"<<zero<< endl;
                cur=1;
                pre=s[i];
            }
            if(s[i]=='1'){
                if(one<cur){
                    one=cur;
                }
            }else{
                 if(zero<cur){
                    zero=cur;
                }
            }
            //cout <<s[i]<<"--cur:"<<cur<<"--"<<"one:"<<one<<"zero:"<<zero<< endl;
        }
        return (one>zero);
    }
};


bool solve()
{
    //cout << "Case #"<<c<<": "<<c-1<< endl;
    string s;
    cin>>s;
    Solution sln;
    bool res = sln.checkZeroOnes(s);
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