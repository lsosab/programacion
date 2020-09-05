#include<iostream>
int main(void)
{
  int n= 0,count= 1;
  std::cout<<" Secuencia de Collatz:\n";
  std::cout<<" enter a number:\n";
  std::cin >> n;
  
  while (n!= 1){
    std::cout<< n <<"\n";
    if(n%2== 0){
      n= n/2;}
    else {
      n= 3*n+1;}
      count= count+1;}
  std::cout<< n <<"\n";
  std::cout<< "cantidad de numeros " << count<<"\n";
      return 0;
    }
    
