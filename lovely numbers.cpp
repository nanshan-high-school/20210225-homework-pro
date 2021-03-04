#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    int totala = 0;
    int totalb = 0;
    int j = 0;
    int k = 0;
    int aa[1000000];
    int bb[1000000];
    cin >> a >> b;
    for(int i = 2; i <= sqrt(a); i++){
        if(a % i == 0){
            aa[j] = a / i;
            j++;
            if(a / i != a / (a / i)){
                aa[j] = a / (a / i);
            j++;
            }
        }
    }
    for(int i = 2; i <= sqrt(b); i++){
        if(b % i == 0){
            bb[k] = b / i;
            k++;
            if(b / i != b / (b / i)){
                bb[k] = b / (b / i);
            k++;
            }
        }
    }
    for(int i = 0; i < j; i++){
        totala += aa[i];
    }
    totala += 1;
    for(int i = 0; i < k; i++){
        totalb += bb[i];
    }
    totalb += 1;
    if(totala == b && totalb == a){
        cout << "true";
    }else{
        cout << "false";
    }
}
