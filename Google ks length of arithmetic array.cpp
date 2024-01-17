#include <iostream>
using namespace std;

int main(){

    int n;                     // inputing array size
    cin>>n;
    int a[n];
    
    for(int i=0 ; i<n ; i++){       // inputing array elements
        cin>>a[i];
    }
    int ans = 2;                      // minimum possible answer is 2
    int pd = a[1] - a[0];             // previous common diffrence
    int j = 2;                        // starting from j=2 for comparison
    int curr = 2;                     // intialising curr to be 2
    while(j<n){
        if(pd == a[j] - a[j-1]){         // if diffrence is same inc curr
            curr++;
        }
        else{
            pd = a[j] - a[j-1] ;          // if diffrence is not same
            curr =2 ;                    //setting curr to previous
        }
        ans = max(ans, curr);            //finding max
        j++;
    }

    cout<<ans;
    return 0;
}
