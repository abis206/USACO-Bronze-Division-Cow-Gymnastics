#include <bits/stdc++.h>
#define pb push_back


using namespace std;
const int MAXN = 100005;
typedef long long ll;

int a[22][22];
int main() {
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    int k, n;
    cin>>k>>n;
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            a[i][x - 1] = j+1;
        }
    }
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            bool bol = 1;
            if(i == j) continue;
            for(int z=0;z<k;z++){
                if(a[z][i] < a[z][j])bol = 0;
            }
            res += bol;
        }
    }
    cout<<res;
    return 0;
}
