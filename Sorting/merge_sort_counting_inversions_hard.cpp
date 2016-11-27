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

long merge(int arr[], int low,int mid,int high){

    int *temp=new int[high-low+1];

    int i=low;
    int j=mid+1;
    int k=0;

    long inversions=0;

    while(i<=mid && j<=high){
        if(arr[i]>arr[j]){
            temp[k++]=arr[j];
            j++;
            inversions+=(mid-i+1);
        }else{
            temp[k++]=arr[i];
            i++;
        }
    }

    while(i<=mid){
        temp[k++]=arr[i];
        i++;
    }

    while(j<=high){
        temp[k++]=arr[j];
        j++;
    }

    k=0;
    for(int i=low;i<=high;i++){
        arr[i]=temp[k];
        k++;
    }

    return inversions;

}

long merge_sort(int arr[],int low,int high){
    if(low>=high)
        return 0;

    int mid = (low+high)/2;

    long left=merge_sort(arr,low,mid);
    long right=merge_sort(arr,mid+1,high);

    long merge_inversions=merge(arr,low,mid,high);

    return left+right+merge_inversions;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int *arr=new int[n];
        for(int arr_i = 0;arr_i < n;arr_i++){
           cin >> arr[arr_i];
        }
        cout << merge_sort(arr,0,n-1) << endl;
    }
    return 0;
}
