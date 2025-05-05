/* https://judge.beecrowd.com/pt/problems/view/1520 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int numCaixas = 0;
    while(cin >>numCaixas){
        vector <vector<int>> caixas;
        
        for(int i = 0; i < numCaixas; i++){//recebo as caixas e guardo num array
            int x = 0;
            int y = 0;

            cin >>x>>y;
            caixas.push_back({x,y});
        }

        vector <int> parafusos;

        for( vector<int> caixa: caixas){//coloco todos os números do intervalo das caixas num array por extenso
            for(int i = caixa[0]; i<caixa[1]+1; i++){
                parafusos.push_back(i);
            }
        }

        sort(parafusos.begin(), parafusos.end());

        int achar = -1;
        cin>>achar;
        int l = 0;
        int r = parafusos.size()-1;

        int primeiraOcorrencia = -1;
        while(r>=l){/* achar o lower bound */
            int mid = int((l+r)/2);
            if(parafusos[mid] == achar){
                primeiraOcorrencia = mid;
                r = mid-1;
            }
            else if(achar > parafusos[mid]){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }

        int ultimaOcorrencia = -1;
        l = 0;
        r = parafusos.size()-1;
        while(r>=l){//achar upper bound
            int mid = int((l+r)/2);
            if(parafusos[mid] == achar){
                ultimaOcorrencia = mid;
                l = mid+1;
            }
            else if(achar>parafusos[mid]){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }

        if(primeiraOcorrencia == -1 || ultimaOcorrencia == -1){
            cout<<achar<< " not found"<<endl;
        }else{
            cout<<achar << " found from " << primeiraOcorrencia<<" to "<<ultimaOcorrencia<<endl;
        }
    }
    
}