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

bool isMatching(char s,char e){
    //cout<<s<<" "<<e<<endl;

    if(s=='{' && e=='}')
        return true;

    if(s=='[' && e==']')
        return true;

    if(s=='(' && e==')')
        return true;


    return false;

}

bool is_balanced(string expression) {
    stack<char> st;

    for(int i=0;i<expression.length();i++){
        char c =expression[i];

        if(c=='('||c=='{'||c=='[' )
            st.push(c);

        else{

            if(st.empty())
                return false;

            if(!isMatching(st.top(),c))
                return false;

            st.pop();

        }
    }

    if(st.empty())
       return true;

    return false;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
