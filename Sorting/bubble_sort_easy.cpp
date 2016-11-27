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


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> arr[a_i];
    }

    int swaps = 0;

    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swaps++;
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }

    cout<<"Array is sorted in "<<swaps<<" swaps."<<endl;
    cout<<"First Element: "<<arr[0]<<endl;
    cout<<"Last Element: "<<arr[n-1]<<endl;

    return 0;
}
