// =====================================================================================
//
//       Filename:  TANGDIV.cpp
//
//    Description:  http://www.codechef.com/problems/TANGDIV
//
//        Version:  1.0
//        Created:  Wednesday 16 April 2014 01:22:20  IST
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
//set<int> myset;
    int
main ( int argc, char *argv[] ){
//	ios_base::sync_with_stdio(false);
    int t;
    int n,k,p;
    int x,y;
    for(s(t);t;t--){
        set<int> myset;
        //myset.clear();
        s(n); s(k); s(p);
        REP(i,k){
           s(x); s(y);
           myset.insert(x);
        }

        int flag = true;
        REP(i,p){
            s(x); s(y);
            if(myset.find(x) == myset.end()){
                flag = false;
            }
        }
        if(flag){
            printf("Yes\n");
            //cout<<"Yes\n";
        } else {
            printf("No\n");
            //cout<<"No\n";
        }
    }

	return EXIT_SUCCESS;
}		// ----------  end of function main  ---------- 

