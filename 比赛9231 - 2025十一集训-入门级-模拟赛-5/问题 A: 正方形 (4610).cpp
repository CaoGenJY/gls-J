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
double n;
int k,firstid=0;
double ans[5];
int main()
{
    freopen("square.in","r",stdin);
    freopen("square.out","w",stdout);
    double dn=sqrt(2)/2;
    n=read(); k=read();
    for(int i=1;i<=k;i++){
        for(int j=0;j<3;j++){
            ans[j]+=n;
            if(j==firstid) ans[j]+=n;
        }
        (firstid+=1)%=3;
        n*=dn;
    }
    for(int i=0;i<3;i++){
        cout<<fixed<<setprecision(3)<<ans[i]<<' ';
    }
    return 0;
}
/**************************************************************
   ____                    ____                      _  __   __
  / ___|   ____    ___    / ___|   ___   ____       | | \ \ / /
 | |      / _  |  / _ \  | |  _   / _ \ |  _ \   _  | |  \ V / 
 | |___  | (_| | | (_) | | |_| | |  __/ | | | | | |_| |   | |  
  \____|  \____|  \___/   \____|  \___| |_| |_|  \___/    |_|  
                                                               
**************************************************************/