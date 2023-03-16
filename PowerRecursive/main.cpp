#include<iostream>
using namespace std;



int recursive(int a, int n){
    if(n == 1){
        return a;
    }
    else{
        return a*recursive(a, n-1);
    }
    
}

int main(){
    int a, n;
    cout << "base: ";
    cin >> a;
    cout << "power: ";
    cin >> n;
    cout << recursive(a,n) << endl;
    
    return 0;
}
