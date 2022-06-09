#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define int long long
#define PI 3.1415926535897932384626
#define rep(j,i, n) for(int j=i;j<n;j++)
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
const int mod=1e9+7;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(bool t) {cerr << t;}
//void _print(lli t) {cerr << t; }

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.F); cerr << ","; _print(p.S); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
void Substring(string s) { int n=s.length();for(int i=0;i<n;i++){for(int j=i;j<n;j++){for(int k=i;k<=j;k++){cout<<s[k]<<" ";}cout<<endl;}}}
int binpow(int b,int p){int r=1;while(p){if(p&1)r=(r*b)%mod;b=(b*b)%mod;p/=2;}return r;}


signed  main()
{
    #ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
    #endif


    int m,s;
    cin>>m>>s;

    if(s > 9*m)
    {
        cout<<"-1 -1"<<endl;
    }
    else if(m==1)
    {
        cout<<s<<" "<<s<<endl;
    }
    else if(s==0)
    {
        cout<<"-1 -1"<<endl;
    }
    else
    {
        int ss=s;
         vi v(m,0);
         v[0]=1;

         s--;

        if(s)
        {
             for(int i=m-1;i>=0;i--)
             {
               if(s > 9)
               {
                 v[i]=9;
                 s=s-9;
               }
               else
               {
                 v[i]=v[i]+s;
                 s=0;
                 break;
               }
             }
        }

         debug(v);
          rep(i,0,m) cout<<v[i];
          cout<<" ";

          rep(i,0,m) v[i]=9;

          int curr=9*m;
          debug(v);
         debug(ss);
          for(int i=m-1;i>=0;i--)
          {
              if(curr - ss >= 9)
              {
                  curr=curr-9;
                  v[i]=0;
              }
              else
              {
                 v[i]=v[i]-(curr-ss);
                 break;
              }

          }

          rep(i,0,m) cout<<v[i];
          cout<<endl;
    }

}

