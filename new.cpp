#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    if(!(cin>>s)) return 0;
    int n=s.size();
    vector<vector<bool>> pal(n,vector<bool>(n,false));
    for(int i=n-1;i>=0;--i){
        for(int j=i;j<n;++j){
            if(s[i]==s[j] && (j-i<2 || pal[i+1][j-1])) pal[i][j]=true;
        }
    }
    const int INF = 1e9;
    vector<int> dp(n+1,INF);
    dp[0]=-1;
    for(int i=1;i<=n;++i){
        for(int j=0;j<i;++j){
            if(pal[j][i-1]) dp[i]=min(dp[i], dp[j]+1);
        }
    }
    cout<<dp[n]<<"\n";
    return 0;
}
