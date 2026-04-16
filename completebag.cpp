#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int W;
    int n;
    cin >> W >> n;
    int w[n];
    int v[n];
    int dp[W+1]={0};
    for(int i=0;i<n;i++){
        cin >> w[i] >> v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=w[i];j<=W;j++){
            dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
        }
    }
    cout << dp[W] << endl;

    return 0;
}