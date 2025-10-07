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
string s;
map<char,int> mp;
int main()
{
    freopen("missing.in","r",stdin);
    freopen("missing.out","w",stdout);
    cin>>s;
    for(int i=0;i<(int)s.size();i++){
        mp[s[i]]=1;
    }
    for(char ch='a';ch<='z';ch++){
        if(!mp.count(ch)){
            cout<<ch;
            return 0;
        }
    }
    puts("None");
    return 0;
}
/**************************************************************
   ____                    ____                      _  __   __
  / ___|   ____    ___    / ___|   ___   ____       | | \ \ / /
 | |      / _  |  / _ \  | |  _   / _ \ |  _ \   _  | |  \ V / 
 | |___  | (_| | | (_) | | |_| | |  __/ | | | | | |_| |   | |  
  \____|  \____|  \___/   \____|  \___| |_| |_|  \___/    |_|  
                                                               
**************************************************************/