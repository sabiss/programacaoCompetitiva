//codeForce - 1703F
//achei dificil, bicha levei dois dias pra conseguir fazer
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long casosDeTeste = 0;
    cin>>casosDeTeste;
    vector <pair<long long,long long>> pares;



    for(int i = 0; i<casosDeTeste; i++){
        pares.clear();

        long long tamanhoArray = 0;
        cin >>tamanhoArray;

        for(int e = 1; e < tamanhoArray+1; e++){//(indice, valor)
            long long entrada = 0;
            pair<long long,long long> elemento;
            cin>> entrada;
            if(e > entrada){//pra que todos já passe no teste de Ai<i and Aj<j
                elemento.first = e;
                elemento.second = entrada;
                pares.push_back(elemento);
            }
            
        }

        sort(pares.begin(), pares.end());
        
        long long quantidadeDePares = 0;
        
        for(int j = pares.size()-1; j >-1; j--){
            int l = 0;
            int r = pares.size()-1;
            long long auxiliar  = 0;
            while(r>=l){
                int mid = int((l+r)/2);
                if(pares[j].second > pares[mid].first){
                    auxiliar=mid+1;//vou usar ela pra contar pra trás ex: se der 2 é por que tem 3 número que vão satisfazer a condição
                    l=mid+1;
                }else{
                    r=mid-1;
                }
            }
            quantidadeDePares +=auxiliar;
            
        }
        cout<<quantidadeDePares<<endl;
    }
}