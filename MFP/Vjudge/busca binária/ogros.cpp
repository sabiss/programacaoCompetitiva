//https://neps.academy/br/exercise/261
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n = 0;//num total de premiações
    int m = 0;//num de ogros

    cin >> n >> m;
    vector <int> faixaPremiacao;

    for(ll i = 0; i < n-1; i++){
        ll e = 0;
        cin >>e;
        faixaPremiacao.push_back(e);

    }
    
    vector <int> premiassao;

    for(int i = 0; i < n; i++){// F1 para quem força < A1...
        ll e = 0;
        cin >>e;
        premiassao.push_back(e);
    }

    vector <ll> forcaDosOgros;

    for(int i = 0; i < m; i++){
        ll o = 0;
        cin>>o;
        forcaDosOgros.push_back(o);
    }

    for(int i = 0; i < forcaDosOgros.size(); i++){
        int l=0;
        int r = faixaPremiacao.size()-1;
        int upper = 0;
        while(r>=l){
            int mid = int((l+r)/2);
            if(faixaPremiacao[mid] > forcaDosOgros[i]){
                upper = mid;
                r = mid-1;
            }else{
                l = mid+1;
                upper = l;
            }
        }
        cout << premiassao[upper] << " ";
        
    }

}