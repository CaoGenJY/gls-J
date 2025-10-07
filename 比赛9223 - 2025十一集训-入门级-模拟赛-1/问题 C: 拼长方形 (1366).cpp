#include<bits/stdc++.h>
#define int long long
#define ll unsigned long long
using namespace std;
inline ll read()
{
    char c=getchar(); int x=0,f=1;
    while(c<48){if(c=='-')f=-1;c=getchar();}
    while(c>47)x=(x*10)+(c^48),c=getchar();
    return x*f;
}
inline void mwrite(ll a)
{
    if(a>9)mwrite(a/10);
    putchar((a%10)|48);
}
inline void write(int a,char c)
{
    mwrite(a<0?(putchar('-'),a=-a):a);
    putchar(c);
}
const int maxn=1e5+5;
ll n;
ll a[maxn];
vector<ll> v;
map<ll,ll> mp;
signed main()
{
    freopen("rectangle.in","r",stdin);
    freopen("rectangle.out","w",stdout);
    n=read();
    for(int i=1;i<=n;i++){
        a[i]=read();
        if(!mp.count(a[i])||mp[a[i]]%2==0){
            if(!mp.count(a[i])) mp[a[i]]=1;
            else mp[a[i]]++;
        }
        else{
            mp[a[i]]++;
            v.push_back(a[i]);
        }
    }
    if(v.size()<=1){
        puts("0");
        return 0;
    }
    sort(v.begin(),v.end(),greater<int>());
    write((ll)(v[0]*v[1]),'\n');
    return 0;
}
/**************************************************************
   ____                    ____                      _  __   __
  / ___|   ____    ___    / ___|   ___   ____       | | \ \ / /
 | |      / _  |  / _ \  | |  _   / _ \ |  _ \   _  | |  \ V / 
 | |___  | (_| | | (_) | | |_| | |  __/ | | | | | |_| |   | |  
  \____|  \____|  \___/   \____|  \___| |_| |_|  \___/    |_|  
                                                               
**************************************************************/