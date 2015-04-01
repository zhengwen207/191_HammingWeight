#include<iostream>
#include<sstream>

using namespace std;

int getHammingWeight(unsigned a);

int main(int argc, char* argv[]){
    
   // convert char* to unsigned
   stringstream strValue;
   strValue << argv[1];

   unsigned a;
   strValue >> a;
   
   // count the number of 1's
   int s=getHammingWeight(a);
   
   // output the result
   cout<<"The number of 1's in "<<a<<" is "<<s<<"."<<endl;
}

int getHammingWeight(unsigned a)
{
   // m is used to test if a bit is 1
   unsigned m=1;

   // s is used to count how many 1's it has
   int s=0;

   // c is used to check
   unsigned c;

   for (int i=0; i<32; ++i){
      
       // bitwise and
       c = a & m;

       // if the bit is 1, increase s by 1
       if (c>0) ++s;
       
       // update m
       m*=2;
   }
  
   return s;

}
