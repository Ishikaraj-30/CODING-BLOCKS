// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[1000];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//         }
//         //algorithm for largest and smallest number
//         int largest = INT_MIN;
//         int smallest = INT_MAX;
//         for(int i=0;i<n;i++){
//             if(a[i]>largest){
//                 largest = a[i];
//             }
//             if(a[i]<smallest){
//             smallest = a[i];
//             }
        
//     }
//     cout<<"largest number is "<< largest<<endl;
//     cout<<"smallest number is "<< smallest;
//     return 0;
// }


                        //OR

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0; i<n; i++){
        cin>>a[i];
        }
        //algorithm for largest and smallest number
        int largest = INT_MIN;
        int smallest = INT_MAX;
        for(int i=0;i<n;i++){
            largest = max(largest,a[i]);
            smallest = min(smallest,a[i]);
    }
    cout<<"largest number is "<< largest<<endl;
    cout<<"smallest number is "<< smallest;
    return 0;
}