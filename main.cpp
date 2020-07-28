#include <iostream>
using namespace std;
//factorial mediante funciones
int  fac (int  );
int main() {
  int num;
  cout<<"ingrese un numero";
 cin>>num;
cout << fac (num);

return 0;
}
 int  fac (int num ){
  

 if (num==0){
    return 1;
 }else{
   num=num*fac(num-1);
   
 }
 
  return  num;
 }