#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    int cumSum[1000] = {0};
    int maximumSum = 0;
    int currentSum = 0;
    int left = -1;
    int right = 1;
    cin>>a[0];
    cumSum[0] = a[0];
    for(int i=1; i<n; i++){
        cin>>a[i];
        cumSum[i] = cumSum[i-1]+a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            currentSum = cumSum[j]-cumSum[i-1];
            if(currentSum>maximumSum){
                maximumSum = currentSum;
                left =i;
                right = j;
            }
        }
    }
    cout<<"Maximum sum is "<<maximumSum<<endl;
    for(int i=left; i<=right; i++){
        cout<<a[i]<<", ";
    }
    return 0;
}