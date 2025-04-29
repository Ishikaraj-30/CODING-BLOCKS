#include<iostream>
using namespace std;
int main(){
    // intialisation
    int a[10]={0};
    // sizeof
    int n= sizeof(a)/sizeof(int);
    cout<<n<<endl;
    cout<<sizeof(a)<<endl;
    // update a single array
    a[5] = {10};
    // input all the value from the user
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    // print all the 10 elements
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ,";
    }
  return 0;  
}