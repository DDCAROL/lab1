#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please enter an integer: ";
    cin>>n;
    for (; n!=1;) {
        if ((n%2)==1) n=3*n+1;
        else n=n/2;
        cout<<n<<" ";
    }
    cout<<'\n';
    return 0;
}
