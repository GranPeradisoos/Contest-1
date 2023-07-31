#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b;  
    while(cin >> a >> b){       
        int mul=a*b;
        if(mul==0) cout << 0 << endl;
  else cout << mul*2 << endl;
    }
return 0;
}
