//https://codeforces.com/contest/1697/problem/B
//deu certo
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n=0, q=0;
    cin >> n >> q;
    vector <ll> elementos;

    for(int i = 0; i < n; i++){//preenchendo elementos
        ll a = 0;
        cin >>a;//p1,p2,p3...pn
        elementos.push_back(a);
    }
    sort(elementos.rbegin(), elementos.rend());
    elementos.insert(elementos.begin(), 0);
    vector <ll> somaPre(n+1);
    


    for(int i = 0; i<n+1; i++){
        if(i == 0){
            somaPre[0] =0;
        }else{
            somaPre[i] = somaPre[i-1]+ elementos[i];
        }
        
    }
    for(int i = 0; i < q; i++){
        int x=0,y=0;
        cin >>x >>y;

        cout<<somaPre[x] - somaPre[x-y] <<endl;
    }
    
}