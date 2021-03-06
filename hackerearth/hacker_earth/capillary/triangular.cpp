/*
 * =====================================================================================
 *
 *       Filename:  triangular.cpp
 *
 *    Description:  http://www.hackerearth.com/capillary-hiring-challenge/algorithm/triangular-ranges-2/
 *
 *        Version:  1.0
 *        Created:  Sunday 24 August 2014 02:36:24  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */



#include <cstdlib>
#include <fstream>
#include <iomanip>   
#include <iostream>  
#include <vector>
#include <algorithm>
using namespace std;

// ===  FUNCTION  ======================================================================
//         Name:  main
//  Description:  main function
// =====================================================================================
#define MAX 1000000000010
long long bound;
vector<long long> num;
bool comp(const long long l, const long long r){
	//cout<<l<<"  "<<r<<"   "<<bound<<"\n";
	return l+r<= bound;	
}

void preprocess(){
	long long temp = 1;
	num.push_back(temp);
	for(int i = 2; temp < MAX; i++){
		temp = temp+i;
		num.push_back(temp);
	}
}

int count(long long b){
	bound = b;
	int ret = 0;
	for(vector<long long> :: iterator it = num.begin(); it < num.end(); it++){
		int cnt = lower_bound(it, num.end(), *it, comp) - (it);
		//cout<<"cnt  "<<cnt<<"\n";
		if(cnt >0){
			ret += cnt;
		}
	}
	return ret;
}
	int
main ( int argc, char *argv[] ){

	int q;
	cin>>q;
	preprocess();
	long long l, r;
	while(q--){
		cin>>l>>r;
		cout<<count(r) - count(l - 1)<<"\n";
	}
	return EXIT_SUCCESS;
}		// ----------  end of function main  ---------- 

