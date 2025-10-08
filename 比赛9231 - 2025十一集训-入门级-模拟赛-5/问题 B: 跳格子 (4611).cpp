#include<bits/stdc++.h>
#define ll long long
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
const int maxn=5e3+3;
ll n,a[maxn],rem[maxn];
ll dp(int now){
    if(rem[now]) return rem[now];
    if(now==n) return 0;
    ll ret=0x3f3f3f3f;
    for(int i=1;i<=a[now];i++){
        if(now+i>n) break;
        ret=min(ret,dp(now+i));
    }
    return rem[now]=ret+1;
}
int main()
{
    freopen("jump.in","r",stdin);
    freopen("jump.out","w",stdout);
    n=read();
    for(int i=1;i<=n;i++) a[i]=read();
    cout<<dp(1);
    return 0;
}
/**************************************************************
   ____                    ____                      _  __   __
  / ___|   ____    ___    / ___|   ___   ____       | | \ \ / /
 | |      / _  |  / _ \  | |  _   / _ \ |  _ \   _  | |  \ V / 
 | |___  | (_| | | (_) | | |_| | |  __/ | | | | | |_| |   | |  
  \____|  \____|  \___/   \____|  \___| |_| |_|  \___/    |_|  
                                                               
**************************************************************/