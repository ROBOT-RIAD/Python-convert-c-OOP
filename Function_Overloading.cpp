#include<bits/stdc++.h>
#define fo(i,s,n) for(int i=s;i<n;i++)
#define ffo(i,s,n) for(int i=s;i<=n;i++)
#define ll long long int
#define ROBOT_RIAD ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int,int> pii;

class Calculator {
public:
    // Function with default parameter for num3
    int sum(int num1, int num2, int num3 = 0) {
        return num1 + num2 + num3;
    }
};

int main() {
    ROBOT_RIAD;
    Calculator cal;
    cout << cal.sum(1, 2, 3) << endl;
    cout << cal.sum(1, 2) << endl;
    return 0;
}
