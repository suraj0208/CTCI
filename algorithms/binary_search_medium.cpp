#include <bits/stdc++.h>
using namespace std;

class IceCream {

    public:
        int flavor;
        int index;

        IceCream(int flavor, int index) {
            this->flavor=flavor;
            this->index=index;
       }
};

bool compare(IceCream a,IceCream b){
    return a.flavor<b.flavor;
}

void getsolution(vector<IceCream> arr,int m){
    int i=0;
    int j=arr.size()-1;


    while(i<=j){
        int sum = arr[i].flavor+arr[j].flavor;
        //cout<<i<<" "<<j<<" "<<sum<<endl;
        if(sum==m){
            //cout<<arr[i].index<<" "<<arr[j].index<<endl;
            if(arr[i].index<arr[j].index){
                cout<<arr[i].index<<" "<<arr[j].index<<endl;
            }else{
                cout<<arr[j].index<<" "<<arr[i].index<<endl;
            }

            return;
        }
        if(sum<m)
            i++;
        else
           j--;


    }

}


int main() {
    int t;
    int n, m;
    cin >> t;

    for(int test = 0; test < t; test++) {
        cin >> m >> n;
        vector<IceCream> arr;
        arr.reserve(n);

        for (int i = 0; i < n; i++) {
            int cost;
            cin >> cost;
            arr.push_back(IceCream(cost, i + 1));
        }

        sort(arr.begin(), arr.end(), compare);
        getsolution(arr,m);

    }

}

