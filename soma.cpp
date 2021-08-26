#include <iostream>
#include <cmath>
using namespace std;



int somav(int vet[], int soma, int x, int contador){
    if(contador<x and vet[contador]>=1){
        return somav(vet, soma+pow(vet[contador],2), x, contador+1); }
    return soma;}


    int main(){
  int x;
  cin>>x;
  int vet[x];
  for(int i=0;i<x;i++){
    cin>>vet[i];
  }
  int contador=0;
  int soma=0;
  int somat=somav(vet,soma,x,contador);
  cout<<somat;
return 0;
}