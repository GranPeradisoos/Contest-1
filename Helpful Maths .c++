#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    cin >> p;
    for( int i=0; i<p.size(); i+=2)
    {
        for( int j=0; j<p.size()-1; j+=2)
        {
            if(p[j] > p[j+2]){
                swap(p[j],p[j+2]);}
        }
    }
    cout << p << endl;
    return 0;
}
