#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int MAX;//背包最大容量
    cin >> MAX;
    int n;//物品个数
    cin >> n;
    int w[n];//物品重量
    int v[n];//物品价值
    int dp[MAX+1]={0};
    for(int i=0;i<n;i++){
        cin >> w[i] >> v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=MAX;j>=w[i];--j){
            dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
        }
    }
    cout << dp[MAX] << endl;





    return 0;
}