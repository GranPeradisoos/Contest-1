#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b;  
    while(cin >> a >> b){       
        if(a < b) cout << b - a << endl;
  else cout << a - b << endl;
    }
return 0;
}
