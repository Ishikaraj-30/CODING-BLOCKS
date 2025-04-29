#include<iostream>
using namespace std;
int main(){
    int n,key;
    cin>>n;
    int a[1000];
    //intialisation
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    // enter the key to be search
    cout<<"enter the key to be search: ";
    cin>>key;
    // to check whether the key is preseent or not
    int i;
    for(i=0; i<=n-1; i++){
        if(key==a[i]){
            cout<<key<<" found at "<< n<<" index.";
            break;
        }
    }
    if(n==i){
        cout<<key<<" is not present";
    }
    return 0;
}