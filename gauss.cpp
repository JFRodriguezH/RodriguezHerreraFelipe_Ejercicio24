#include<iostream>
#include<random>
#include<math.h>

int main(){
	float pi = 2.0*asin(1.0);
	srand48(8);
	float p = 0.5;
	for(int i=0; i<10000; i++){
        float pr = p + (drand48()-0.5);
        float r = (exp(-p*p)/sqrt(2.0*pi))/(exp(-pr*pr)/sqrt(2.0*pi));
        float alpha = drand48();
        if(alpha<r){
            p=pr;
		}
		std::cout<<p<<std::endl;
	}
    return 0;
}