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
const int maxn=60;
const ll M=1e9+7;
ll n,ans=1;
char ch[5][maxn];
vector<ll> type;
int main()
{
	freopen("domino.in","r",stdin);
	freopen("domino.out","w",stdout);
	n=read();
	for(int i=1;i<=n;i++) cin>>ch[1][i];
	for(int i=1;i<=n;i++) cin>>ch[2][i];
	for(int i=1;i<=n;i++){
		if(ch[1][i]==ch[2][i]) type.push_back(1);
		else{
			i++;
			type.push_back(2);
		}
	}
	if(type[0]==1) ans*=3;
	else ans*=6;
	for(int i=1;i<(int)type.size();i++){
		int a=type[i-1],b=type[i];
		if(a==1&&b==1) ans*=2;
		if(a==2&&b==1) ans*=1;
		if(a==1&&b==2) ans*=2;
		if(a==2&&b==2) ans*=3;
	}
	write(ans%M,'\n');
	return 0;
}
/**************************************************************
  ____                    ____                      _  __   __
  / ___|   ____    ___    / ___|   ___   ____       | | \ \ / /
  | |      / _  |  / _ \  | |  _   / _ \ |  _ \   _  | |  \ V / 
  | |___  | (_| | | (_) | | |_| | |  __/ | | | | | |_| |   | |  
  \____|  \____|  \___/   \____|  \___| |_| |_|  \___/    |_|  
  
 **************************************************************/
