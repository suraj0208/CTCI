#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool isPrime(long n){
    if(n==1)
        return false;

    if(n==2)
        return true;

    if(n==3)
        return true;

    if(n%2==0)
        return false;

    if(n%3==0)
        return false;

    long i=5;
    long w=2;

    while(i*i<=n){
        if(n%i==0)
            return false;

        i=i+w;
        w=6-w;

    }

    return true;
}


int main(){
    int p;
    cin >> p;
    for(int a0 = 0; a0 < p; a0++){
        long n;
        cin >> n;

        if(isPrime(n))
            cout<<"Prime"<<endl;
        else
            cout<<"Not prime"<<endl;
    }

    return 0;
}
