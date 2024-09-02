#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];

    // ------------------------- BUBBLE SORT ------------------------------

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(vec[i]>vec[j]){
                int temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }

    for(auto x:vec) cout<<x<<" ";
}