#include <iostream>
#include <cstdio>
using namespace std;

//better approach according memory and execution time
/*int max_of_four(int a, int b, int c, int d){
    if(a>b&&a>c&&a>d){
        return a;
    }
    else if(a<b&&b>c&&b>d){
        return b;
    }
    else if(c>a&&c>b&&c>d){
        return c;
    }
    else{
        return d;
    }
}*/

//better approach according to code readability, scalability, and maintainability
int max_of_four(int a, int b, int c, int d){
    int max1,max2,max;
    if(a>b){
        max1=a;
    }
    else{
        max1=b;
    }
    if(c>d){
        max2=d;
    }
    else{
        max2=d;
    }
    if(max1>max2){
        max=max1;

    }
    else{
        max=max2;
    }
   
    return max;
}

int main() {
    int a, b, c, d;
    return 0;
}
