#include <iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
#define ld long double
#define pi 3.141592653589793238
#define ahmed  ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
int counter[1000001] = {};
void squ()
{
    string s;
    cin >> s;
    ll n = s.length();
    if (n % 2 == 1)no
    else {
        string s1 = s.substr(0, n / 2);
        string s2 = s.substr(n / 2, n / 2);
        if (s1 == s2) yes
        else no
    }
}
int main()
{
    ahmed;
    ll t;
    cin >> t;
    while (t--)
        squ();
    
    
    return 0;
}
//مهما الدنيا إتنيلت ضلمت لازم يبقى عندك زفت أمل و تعرف إن في نور في أخر أم النفق//

        //اهو بنتنيل نستمر ف السعي رغم فقدان الزفت الشغف 