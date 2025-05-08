//https://neps.academy/br/exercise/255
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n = 0;
    cin >> n;

    vector <long long> numCasas;

    for(long long i = 0; i < n; i++){
        long long e = 0;
        cin >>e;
        numCasas.push_back(e);
    } 

    long long soma = 0;
    cin >>soma;
    vector <long long> casas;
    bool parar = false;

    for(long long i = 0; i < numCasas.size(); i++){
        long long l = 0;
        long long r = numCasas.size()-1;
        if(parar){
            break;
        }
        while(r>=l){
            long long mid = static_cast<long long>((l + r) / 2);
            if(numCasas[mid]>numCasas[i]){
                if(numCasas[mid]+numCasas[i] == soma){
                    casas.push_back(numCasas[i]);
                    casas.push_back(numCasas[mid]);
                    parar = true;
                    break;
                }else if(numCasas[mid] + numCasas[i] > soma){
                    r = mid-1;
                }else{
                    l = mid+1;
                }
            }else{
                l = mid+1;
            }
        }
    }
    cout << casas.front() << " " << casas.back() << endl;
    
}