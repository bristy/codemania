// =====================================================================================
//
//       Filename:  pythagorean.cpp
//
//    Description:  http://www.hackerearth.com/sokrati-hiring-challenge/algorithm/pythagorean-triplets-15/
//
//        Version:  1.0
//        Created:  Saturday 07 June 2014 10:45:49  IST
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Brajesh Kumar (), kbrajesh176@gmail.com
//   Organization:  
//
// =====================================================================================


//Data Structure includes
#include<vector>
#include<stack>
#include<set>
#include<bitset>
#include<map>
#include<queue>
#include<deque>
#include<string>


//Other Includes
#include<iostream>
#include<fstream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cmath>

using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REP(i,n) FOR(i,0,n)
#define pb push_back
#define mp make_pair
#define s(n) scanf("%d",&n)
#define sl(n) scanf("%lld",&n)
#define sf(n) scanf("%lf",&n)
#define ss(n) scanf("%s",n)
#define fill(a,v) memset(a, v, sizeof a)
#define sz(a) int((a).size())
#define INF (int)1e9
#define EPS 1e-9
#define bitcount __builtin_popcount
#define all(c) (c).begin(), (c).end()
#define maX(a,b) (a>b?a:b)
#define miN(a,b) (a<b?a:b)
#define DREP(a) sort(all(a)); a.erase(unique(all(a)),a.end())
#define INDEX(arr,ind) lower_bound(all(arr),ind)-arr.begin()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())

typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef long long LL;
typedef vector<long long > VLL;
typedef pair<int, int > PII;
typedef vector< PII > VPII;
/*Main Code*/
#define EXIT_SUCCESS 0
// ===  FUNCTION  ======================================================================
//         Name:  main
//  Description:  main function
// =====================================================================================
	
LL getSquare(LL a){
    return a*a;
}


bool isSquare(LL a){
    LL b = sqrt(a);
    return b*b == a;
}
int
main ( int argc, char *argv[] ){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ret = 0;
        FOR(a,1, n){
            FOR(b, a, n){
                LL c = getSquare(a) + getSquare(b);
                if(isSquare(c) && sqrt(c)<=n){
                    ret++;
                }
            }
        }

        cout<<ret<<endl;
    }
	return EXIT_SUCCESS;
}		// ----------  end of function main  ---------- 

