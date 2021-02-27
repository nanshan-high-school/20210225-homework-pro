#include <iostream>
using namespace std;

int main(){
  int N=100000, num[N], i;
  for(i=1; i<=N/2; i++){
    int j=2*i;
    while(j<=N){
      num[j]+=i;
      j+=i;
    }
  }
  for(int i=0; i<N; i++){
    if(num[i]>i && num[i]<=N && num[num[i]]==i)
      cout<<"("<<i<<","<<num[i]<<")"<<endl;
  }
}
