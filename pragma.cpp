#include"bits/stdc++.h"
// #pragma GCC target("popcnt")
using namespace std;

vector<string> split(const string& s, char c) {
    vector<string> v; stringstream ss(s); string x;
    while (getline(ss, x, c)) v.emplace_back(x); return move(v);
}
template<typename T, typename... Args>
inline string arrStr(T arr, int n) {
    stringstream s; s << "[";
    for(int i = 0; i < n - 1; i++) s << arr[i] << ",";
    s << arr[n - 1] << "]";
    return s.str();
}
 
#define EVARS(args...) {__evars_begin(__LINE__); __evars(split(#args, ',').begin(), args);}
 
inline void __evars_begin(int line) { cerr << "#" << line << ": "; }
template<typename T> inline void __evars_out_var(vector<T> val) { cerr << arrStr(val, val.size()); }
template<typename T> inline void __evars_out_var(T* val) { cerr << arrStr(val, 10); }
template<typename T> inline void __evars_out_var(T val) { cerr << val; }
inline void __evars(vector<string>::iterator it) { cerr << endl; }
 
template<typename T, typename... Args>
inline void __evars(vector<string>::iterator it, T a, Args... args) {
    cerr << it->substr((*it)[0] == ' ', it->length()) << "=";
    __evars_out_var(a);
    cerr << "; ";
    __evars(++it, args...);
}

#define int long long
// #define ll int
const int inf=5e18;
#define F first
#define S second
#define Z(c) (int)(c).size()
#define pii pair<int,int>

const int N=1e5+15;
const int mod=1e9+7;

int calc(int id,vector<int> &a){
  if(id==0) return 1;
  int i=1;
  while(id-i>=0 and a[id-i]==0) i++;
  i--;

  if(a[id]==0){
     // EVARS(id,a);
     if(i>0) return 1;
     return 1-calc(id-1,a);
  }
  if(a[id]==1) {
     if(i>0) return 0;
     return calc(id-1,a);
  }
}
void boomer(){
   int n; cin>>n;
   vector<int> a;
   while(n>0){
     a.push_back(n%2);
     n=n/2;
   }
   n=a.size();
   reverse(a.begin(),a.end());
   // EVARS(n,a);
   if(calc(n-1,a)) cout<<"Alice";
   else cout<<"Bob";
}


  signed main()
  { 
  ios_base::sync_with_stdio(0); cin.tie(0); 
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r", stdin);   
  freopen("output.txt","w", stdout);
  freopen("error.txt","w", stderr); 
  #endif

  int tc=1;
  
  // comprime();
  // fact();
  cin>>tc; 
  for(int i=1;i<=tc;++i)
  { 
  // cout<<"Case #"<<i<<": ";
  boomer();
  if(i<tc)
  cout<<"\n";
  }

  #ifndef ONLINE_JUDGE
  cerr<<(1000*clock())/CLOCKS_PER_SEC<<"ms";
  #endif

  return 0; 
  }
