//https://www.codechef.com/problems/PRFSM
//certa
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testes = 0; //t

    cin >> testes;

    for(int o = 0; o < testes; o++){
        ll n;
        cin >>n;
        vector <ll> elementos(n);

        for(int i = 0; i < n; i++){
            ll e = 0;
            cin >> e;
            elementos[i] = e;
        }
        ll q;
        cin >>q;

        vector <ll> somaPre(n+1);
        for(int i = 1; i < n+1; i++){
            if(i==1){
                somaPre[i] = elementos[i-1];
            }else{
                somaPre[i] = somaPre[i-1] + elementos[i-1];
            }
        }
        for(int i = 0; i < q; i++){
            ll l,r;
            cin >>l  >> r;

            ll soma;
            if(l == 1){
                soma = somaPre[r];
            }else{
                soma = somaPre[r] - somaPre[l-1];
            }
            
            cout << soma << " ";
        }
    }
    


}