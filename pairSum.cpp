#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[] ={1,3,5,7,10,11,12,13};
    int s = 16;
    int i = 0;
        int j = sizeof(a)/sizeof(int)-1;
        while(i<j){
            int cs = a[i]+a[j];
            if(cs>s){
                j--;
            }
            else if(cs<s){
                i++;
            }
            else if(cs==s);
            cout<<a[i]<<" and "<<a[j]<<" gives the given sum "<<s<<endl;
            i++;
            j--;
        }
    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int a[1000];
//     int s;
//     cin>>s;
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//         int j = sizeof(a)/sizeof(int)-1;
//         while(i<j){
//             int cs = a[i]+a[j];
//             if(cs>s){
//                 j--;
//             }
//             else if(cs<s){
//                 i++;
//             }
//             else if(cs==s);
//             cout<<a[i]<<" and "<<a[j]<<" gives the given sum"<<endl;
//             i++;
//             j--;
//         }
//     }
//     return 0;
//     }