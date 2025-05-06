#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int tamanhoArrayA = 0;
    int tamanhoArrayB = 0;
    vector <int> arrayA;
    vector <int> arrayB;

    cin >> tamanhoArrayA >> tamanhoArrayB;

    for(int i = 0; i < tamanhoArrayA; i++){
        int a = 0;
        cin>>a;
        arrayA.push_back(a);
    }

    for(int i = 0; i < tamanhoArrayB; i++){
        int b = 0;
        cin>>b;
        arrayB.push_back(b);
    }
    
    for(int b: arrayB){
        for(int a: arrayA){

        }
    }
    sort(arrayA.begin(), arrayA.end());
    vector <int> ocorrencias;
    for(int b: arrayB){
        
        int l = 0;
        int r = arrayA.size()-1;

        while(r>=l){//quis fazer a busca binária na mão pra exercitar, mas sei que existem métodos
            int mid = int((l+r)/2);

            if(b == arrayA[mid] || b > arrayA[mid]){
                l = mid+1;
            }else{
                r = mid-1;
            }
            
        }
        ocorrencias.push_back(l);
    }
    for(int numero:ocorrencias){
        cout<< numero << " ";
    }
}